#include <stdio.h>
#include <conio.h>
#include <limits.h>

#define MAX 10

int graph[MAX][MAX], n;

/* Find minimum distance vertex */
int minDistance(int dist[], int visited[])
{
    int min = INT_MAX, min_index = -1;
    int v;

    for (v = 0; v < n; v++)
    {
	if (visited[v] == 0 && dist[v] <= min)
	{
	    min = dist[v];
	    min_index = v;
	}
    }
    return min_index;
}

/* Function to print path */
void printPath(int parent[], int j)
{
    if (parent[j] == -1)
	return;

    printPath(parent, parent[j]);
    printf(" -> %d", j);
}

/* Dijkstra with path printing */
void dijkstra(int src)
{
    int dist[MAX], visited[MAX], parent[MAX];
    int i, count, u, v;

    for (i = 0; i < n; i++)
    {
	dist[i] = INT_MAX;
	visited[i] = 0;
	parent[i] = -1;
    }

    dist[src] = 0;

    for (count = 0; count < n - 1; count++)
    {
	u = minDistance(dist, visited);
	if (u == -1) break;
	visited[u] = 1;

	for (v = 0; v < n; v++)
	{
	    if (!visited[v] && graph[u][v] &&
		dist[u] != INT_MAX &&
		  dist[u] + graph[u][v] < dist[v])
	    {
		parent[v] = u;
		dist[v] = dist[u] + graph[u][v];
	    }
	}
    }

    printf("\nShortest routes from City %d:\n", src);

    for (i = 0; i < n; i++)
    {
	printf("\nTo City %d", i);
	if (dist[i] == INT_MAX)
	{
	    printf("\nDistance: INF (Not reachable)");
	    printf("\nPath: None\n");
	}
	else
	{
	    printf("\nDistance: %d km", dist[i]);
	    printf("\nPath: %d", src);
	    printPath(parent, i);
	    printf("\n");
	}
    }
}

int main()
{
    int src, i, j;
    clrscr();

    printf("Enter number of cities: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix (distance between cities):\n");
    for (i = 0; i < n; i++)
	for (j = 0; j < n; j++)
	    scanf("%d", &graph[i][j]);

    printf("Enter source city (0 to %d): ", n - 1);
    scanf("%d", &src);

    dijkstra(src);

    getch();
    return 0;
}

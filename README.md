# 🗺️ City Navigation System using Dijkstra Algorithm

A simple City Navigation System developed in C that finds the shortest path between cities using the Dijkstra Algorithm.

This project uses an adjacency matrix to represent distances between cities and calculates the shortest route from a selected source city to all other cities.

---

## 📌 Features

* Find shortest paths between cities
* Display minimum distance from source city
* Show complete route/path
* Uses Dijkstra's shortest path algorithm
* Menu-driven console application
* Suitable for educational and academic purposes

---

## 🛠️ Technologies Used

* C Programming
* Dijkstra Algorithm
* Graph Representation using Adjacency Matrix

---

## 🚀 How to Run

### Compile

```bash
gcc city_navigation.c -o city_navigation
```

### Execute

```bash
./city_navigation
```

---

## 📥 Input

1. Enter the number of cities.
2. Enter the adjacency matrix representing distances.
3. Enter the source city.

Example:

```text
Enter number of cities: 4

0 10 0 30
10 0 50 0
0 50 0 20
30 0 20 0

Enter source city: 0
```

---

## 📤 Output

```text
Shortest routes from City 0

To City 1
Distance: 10 km
Path: 0 -> 1

To City 2
Distance: 50 km
Path: 0 -> 3 -> 2
```

---

## 🧠 Algorithm Used

Dijkstra's Algorithm is used to find the shortest path from a source node to all other nodes in a weighted graph with non-negative edge weights.

### Steps

1. Initialize distances.
2. Select the nearest unvisited city.
3. Update neighboring distances.
4. Repeat until all cities are visited.
5. Display shortest distance and route.

---

## 📂 Project Structure

```text
City-Navigation-System/
│
├── city_navigation.c
└── README.md
```

---

## 🎯 Applications

* GPS Navigation Systems
* Route Planning
* Network Routing
* Transportation Systems
* Logistics Management

---

## 👨‍💻 Author

Harikrithick

Developed as a College Mini Project using C Programming and Dijkstra Algorithm.

---

## 📚 Note

This project is created for educational and learning purposes.

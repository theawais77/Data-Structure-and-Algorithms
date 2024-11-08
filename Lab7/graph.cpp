#include <iostream>
using namespace std;

class Graph {
    int V;           // Number of vertices
    int* adj;        // Adjacency matrix
    void DFSUtil(int v, bool visited[]); // DFS utility function

public:
    Graph(int V);
    ~Graph();        // Destructor to free allocated memory
    void addEdge(int v, int w);
    void DFS(int v);
};

Graph::Graph(int V) {
    this->V = V;
    adj = new int[V * V](); // Allocate and initialize adjacency matrix to 0
}

Graph::~Graph() {
    delete[] adj; // Free allocated memory for adjacency matrix
}

void Graph::addEdge(int v, int w) {
    adj[v * V + w] = 1;
    adj[w * V + v] = 1;
}

void Graph::DFSUtil(int v, bool visited[]) {
    visited[v] = true;
    cout << v << " ";

    for (int i = 0; i < V; i++) {
        if (adj[v * V + i] == 1 && !visited[i]) {
            DFSUtil(i, visited);
        }
    }
}

void Graph::DFS(int v) {
    bool* visited = new bool[V]; // Dynamic allocation of visited array
    for (int i = 0; i < V; i++)
        visited[i] = false;

    DFSUtil(v, visited);

    delete[] visited; // Free allocated memory
}

int main() {
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    cout << "DFS starting from vertex 2:\n";
    g.DFS(2);

    return 0;
}

#include <iostream>
#include <queue>

using namespace std;

class Graph {
    int V;
    int* adj;

public:
    Graph(int V);
    ~Graph(); // Destructor to free memory
    void addEdge(int v, int w);
    void BFS(int s);
};

Graph::Graph(int V) {
    this->V = V;
    adj = new int[V * V](); // Initialize adjacency matrix with zero
}

Graph::~Graph() {
    delete[] adj; // Free allocated memory
}

void Graph::addEdge(int v, int w) {
    adj[v * V + w] = 1;
    adj[w * V + v] = 1;
}

void Graph::BFS(int s) {
    bool* visited = new bool[V]; // Visited array
    for (int i = 0; i < V; i++)
        visited[i] = false;

    queue<int> q; // Queue for BFS
    visited[s] = true; // Mark source as visited
    q.push(s); // Enqueue source

    while (!q.empty()) {
        int u = q.front(); // Dequeue front node
        q.pop();
        cout << u << " ";

        // Enqueue unvisited adjacent vertices
        for (int v = 0; v < V; v++) {
            if (adj[u * V + v] == 1 && !visited[v]) {
                visited[v] = true;
                q.push(v);
            }
        }
    }

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

    cout << "Following is Breadth First Traversal starting from vertex 2:\n";
    g.BFS(2);

    return 0;
}

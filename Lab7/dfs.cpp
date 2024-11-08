#include <iostream>
#include <list>
using namespace std;

class DFSGraph {
    int V; // Number of vertices
    list<int>* adjList; // Adjacency list
    void DFS_util(int v, bool visited[]); // Utility function for DFS

public:
    DFSGraph(int V); // Constructor
    ~DFSGraph();     // Destructor to deallocate memory
    void addEdge(int v, int w); // Function to add an edge
    void DFS(); // DFS traversal function
};

DFSGraph::DFSGraph(int V) {
    this->V = V;
    adjList = new list<int>[V];
}

DFSGraph::~DFSGraph() {
    delete[] adjList; // Free allocated memory for adjacency list
}

void DFSGraph::addEdge(int v, int w) {
    adjList[v].push_back(w);
}

void DFSGraph::DFS_util(int v, bool visited[]) {
    visited[v] = true;
    cout << v << " ";

    for (auto i = adjList[v].begin(); i != adjList[v].end(); ++i) {
        if (!visited[*i]) {
            DFS_util(*i, visited);
        }
    }
}

void DFSGraph::DFS() {
    bool* visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;

    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            DFS_util(i, visited);
        }
    }

    delete[] visited; // Free allocated memory
}

int main() {
    DFSGraph gdfs(5);
    gdfs.addEdge(0, 1);
    gdfs.addEdge(0, 2);
    gdfs.addEdge(0, 3);
    gdfs.addEdge(1, 2);
    gdfs.addEdge(2, 4);
    gdfs.addEdge(3, 3);
    gdfs.addEdge(4, 4);

    cout << "Depth-first traversal for the given graph:" << endl;
    gdfs.DFS();

    return 0;
}

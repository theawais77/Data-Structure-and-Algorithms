#include <iostream>
#include <vector>
using namespace std;

class DisjointSet {
public:

    DisjointSet(int n) : parent(n), rank(n, 0) {
        for (int i = 0; i < n; ++i) {
            parent[i] = i; 
        }
    }


    int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }

    void unionSets(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);

        if (rootX != rootY) {

            if (rank[rootX] < rank[rootY]) {
                parent[rootX] = rootY;
            } else if (rank[rootX] > rank[rootY]) {
                parent[rootY] = rootX;
            } else {
                parent[rootY] = rootX;
                rank[rootX]++;
            }
        }
    }

private:
    vector<int> parent;
    vector<int> rank;
};

int main() {
    int n = 5;
    DisjointSet ds(n);

    cout << "Initial set:";
    for (int i = 0; i < n; ++i) {
        cout << " " << ds.find(i);
    }
    cout << endl;


    ds.unionSets(0, 1);
    ds.unionSets(2, 3);
    ds.unionSets(0, 4);

    cout << "After union operations:";
    for (int i = 0; i < n; ++i) {
        cout << " " << ds.find(i);
    }
    cout << endl;


    cout << "Find(1): " << ds.find(1) << endl;
    cout << "Find(3): " << ds.find(3) << endl;

    return 0;
}

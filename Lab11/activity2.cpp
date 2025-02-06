#include <iostream>
#include <vector>
using namespace std;

class DisjointSet {
public:
 
    DisjointSet(int n) : parent(n) {
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
            parent[rootX] = rootY;
        }
    }


    int size() const {
        return parent.size();
    }

private:
    vector<int> parent;
};

class FriendshipApplication {
public:
    FriendshipApplication(int numPeople) : disjointSet(numPeople) {}

 
    void makeFriends(int person1, int person2) {
        disjointSet.unionSets(person1, person2);
        cout << "People " << person1 << " and " << person2 << " are now friends." << endl;
    }

  
    void printFriendshipGroups() {
        cout << "Friendship Groups:" << endl;
        for (int i = 0; i < disjointSet.size(); ++i) {
            cout << "Person " << i << " belongs to Group " << disjointSet.find(i) << endl;
        }
    }

private:
    DisjointSet disjointSet;
};

int main() {
    int numPeople = 6;
    FriendshipApplication app(numPeople);


    app.makeFriends(0, 1);
    app.makeFriends(2, 3);
    app.makeFriends(1, 4);


    app.printFriendshipGroups();

    return 0;
}

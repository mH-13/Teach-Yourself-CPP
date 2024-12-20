/*1. Union-Find (Disjoint Set Union)
Problem: Detect cycles in an undirected graph.*/

#include <iostream>
#include <vector>
using namespace std;

class UnionFind {
public:
    vector<int> parent, rank;

    UnionFind(int n) : parent(n), rank(n, 0) {
        for (int i = 0; i < n; i++) parent[i] = i;
    }

    int find(int x) {
        if (x != parent[x]) parent[x] = find(parent[x]);
        return parent[x];
    }

    bool unionSets(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);

        if (rootX == rootY) return false;

        if (rank[rootX] > rank[rootY]) {
            parent[rootY] = rootX;
        } else if (rank[rootX] < rank[rootY]) {
            parent[rootX] = rootY;
        } else {
            parent[rootY] = rootX;
            rank[rootX]++;
        }

        return true;
    }
};

int main() {
    int vertices = 4;
    UnionFind uf(vertices);

    vector<pair<int, int>> edges = {{0, 1}, {1, 2}, {2, 3}, {0, 2}};

    for (auto& edge : edges) {
        if (!uf.unionSets(edge.first, edge.second)) {
            cout << "Cycle detected!" << endl;
            return 0;
        }
    }

    cout << "No cycle detected." << endl;
    return 0;
}
//Network connectivity problems.
//Kruskal’s algorithm for Minimum Spanning Tree.
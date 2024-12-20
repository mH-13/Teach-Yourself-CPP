/*Used for problems involving Directed Acyclic Graphs (DAGs).

Problem: Find the order of tasks given dependencies.*/

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> topologicalSort(int vertices, vector<pair<int, int>>& edges) {
    vector<vector<int>> adj(vertices);
    vector<int> inDegree(vertices, 0);

    // Build adjacency list and compute in-degrees
    for (auto& edge : edges) {
        adj[edge.first].push_back(edge.second);
        inDegree[edge.second]++;
    }

    queue<int> q;
    for (int i = 0; i < vertices; i++) {
        if (inDegree[i] == 0) q.push(i);
    }

    vector<int> order;
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        order.push_back(node);

        for (int neighbor : adj[node]) {
            inDegree[neighbor]--;
            if (inDegree[neighbor] == 0) q.push(neighbor);
        }
    }

    if (order.size() != vertices) {
        throw runtime_error("Cycle detected in the graph");
    }

    return order;
}

int main() {
    int vertices = 6;
    vector<pair<int, int>> edges = {{5, 2}, {5, 0}, {4, 0}, {4, 1}, {2, 3}, {3, 1}};

    try {
        vector<int> result = topologicalSort(vertices, edges);
        cout << "Topological Order: ";
        for (int node : result) {
            cout << node << " ";
        }
        cout << endl;
    } catch (const exception& e) {
        cout << e.what() << endl;
    }

    return 0;
}

//Task scheduling.
//Dependency resolution.
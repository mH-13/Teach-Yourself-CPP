#include <iostream>
#include <vector>
using namespace std;

// Graph representation using adjacency list
class Graph {
public:
    int vertices;
    vector<vector<int>> adj;

    Graph(int v) : vertices(v), adj(v) {}

    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u); // For undirected graph
    }

    void printGraph() {
        for (int i = 0; i < vertices; i++) {
            cout << "Vertex " << i << ": ";
            for (int neighbor : adj[i]) {
                cout << neighbor << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(3, 4);

    g.printGraph();

    return 0;
}
//Representing real-world networks (social, roadmaps).
//Efficiently storing graph structures for algorithms like BFS, DFS, Dijkstra’s, etc.
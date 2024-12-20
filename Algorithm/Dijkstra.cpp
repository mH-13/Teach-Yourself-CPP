#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

typedef pair<int, int> pii; // Pair of (distance, vertex)

void dijkstra(vector<vector<pii>>& graph, int src) {
    priority_queue<pii, vector<pii>, greater<pii>> pq; // Min-heap
    vector<int> dist(graph.size(), INT_MAX);

    dist[src] = 0;
    pq.push({0, src});

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        for (auto& edge : graph[u]) {
            int v = edge.second;
            int weight = edge.first;

            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
        }
    }

    cout << "Vertex Distance from Source " << src << ":\n";
    for (int i = 0; i < dist.size(); i++) {
        cout << i << ": " << dist[i] << endl;
    }
}

int main() {
    int vertices = 5;
    vector<vector<pii>> graph(vertices);

    // Add edges: weight, destination
    graph[0].push_back({2, 1});
    graph[0].push_back({4, 2});
    graph[1].push_back({3, 2});
    graph[1].push_back({2, 3});
    graph[2].push_back({1, 4});

    dijkstra(graph, 0);

    return 0;
}

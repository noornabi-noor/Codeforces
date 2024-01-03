#include <iostream>
#include <vector>
#include <limits>

const int INF = std::numeric_limits<int>::max();

// Define a class for representing a graph using an adjacency list
class Graph {
public:
    int V; // Number of vertices
    std::vector<std::vector<std::pair<int, int>>> adj; // Adjacency list

    Graph(int vertices) : V(vertices) {
        adj.resize(V);
    }

    // Add an edge to the graph
    void addEdge(int u, int v, int w) {
        adj[u].push_back(std::make_pair(v, w));
    }

    // Dijkstra's algorithm to find the shortest path
    void dijkstra(int src) {
        int distance[V];
        bool visited[V];

        for (int i = 0; i < V; i++) {
            distance[i] = INF;
            visited[i] = false;
        }

        distance[src] = 0;

        for (int count = 0; count < V - 1; count++) {
            int u = -1;
            for (int v = 0; v < V; v++) {
                if (!visited[v] && (u == -1 || distance[v] < distance[u])) {
                    u = v;
                }
            }

            visited[u] = true;

            for (const auto& neighbor : adj[u]) {
                int v = neighbor.first;
                int weight = neighbor.second;

                if (!visited[v] && distance[u] + weight < distance[v]) {
                    distance[v] = distance[u] + weight;
                }
            }
        }

        // Print the shortest distances from the source
        for (int i = 0; i < V; i++) {
            std::cout << "Shortest distance from " << src << " to " << i << " is " << distance[i] << std::endl;
        }
    }
};

int main() {
    int V = 6; // Number of vertices
    Graph g(V);

    g.addEdge(0, 1, 7);
    g.addEdge(0, 2, 9);
    g.addEdge(0, 5, 14);
    g.addEdge(1, 2, 10);
    g.addEdge(1, 3, 15);
    g.addEdge(2, 3, 11);
    g.addEdge(2, 5, 2);
    g.addEdge(3, 4, 6);
    g.addEdge(4, 5, 9);

    int source = 0; // Source node

    g.dijkstra(source);

    return 0;
}


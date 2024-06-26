#include <iostream>
#include <limits>

using namespace std;

#define INF numeric_limits<int>::max()
#define MAX_NODES 10

// Function to find the vertex with the minimum distance value
int minDistance(int distance[], bool visited[], int nodes) {
    int minDist = INF, minIndex = -1;

    for (int v = 0; v < nodes; ++v) {
        if (!visited[v] && distance[v] < minDist) {
            minDist = distance[v];
            minIndex = v;
        }
    }

    return minIndex;
}

// Function to perform Dijkstra's algorithm
void dijkstra(int graph[MAX_NODES][MAX_NODES], int nodes, int start) {
    // Array to store distances from the start node
    int distance[MAX_NODES];
    fill(distance, distance + nodes, INF);

    // Array to keep track of visited nodes
    bool visited[MAX_NODES] = {false};

    // Set distance for the starting node to 0
    distance[start] = 0;

    for (int count = 0; count < nodes - 1; ++count) {
        // Find the minimum distance vertex that is not yet processed
        int u = minDistance(distance, visited, nodes);

        // Mark the selected vertex as visited
        visited[u] = true;

        // Update the distance value of the adjacent vertices of the selected vertex
        for (int v = 0; v < nodes; ++v) {
            if (!visited[v] && graph[u][v] != 0 && distance[u] != INF &&
                distance[u] + graph[u][v] < distance[v]) {
                distance[v] = distance[u] + graph[u][v];
            }
        }
    }

    // Output the shortest distances from the start node
    cout << "Shortest distances from node " << start << ":\n";
    for (int i = 0; i < nodes; ++i) {
        cout << "To node " << i << ": " << distance[i] << "\n";
    }
}

int main() {
    int nodes;
    cout << "Enter the number of nodes: ";
    cin >> nodes;

    // Example graph represented as an adjacency matrix
    int graph[MAX_NODES][MAX_NODES];

    cout << "Enter the adjacency matrix (0 for no connection):\n";
    for (int i = 0; i < nodes; ++i) {
        for (int j = 0; j < nodes; ++j) {
            cin >> graph[i][j];
        }
    }

    // Starting node
    int startNode;
    cout << "Enter the starting node: ";
    cin >> startNode;

    // Perform Dijkstra's algorithm
    dijkstra(graph, nodes, startNode);

    return 0;
}

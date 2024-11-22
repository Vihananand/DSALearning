#include<iostream>
#include<cstdio>
using namespace std;

#define INF 1000000000
#define MAXN 100

void initializeGraph(int graph[MAXN][MAXN], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) {
                graph[i][j] = 0;
            }
        }
    }
}

void readEdge(int graph[MAXN][MAXN], int m) {
    int u, v, w;
    for (int i = 0; i < m; i++) {
        cin >> u >> v >> w;
        graph[u][v] = max(graph[u][v], w);
    }
}

void floydWarshall(int graph[MAXN][MAXN], int n) {
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                graph[i][j] = max(graph[i][j], min(graph[i][k], graph[k][j]));
            }
        }
    }
}

void printResult(int graph[MAXN][MAXN], int source, int sink) {
    if (graph[source][sink] == 0) {
        cout << "Nodes are unreachable. Maximum flow is 0." << endl;
    } else {
        cout << "Maximum flow from node " << source << " to " << sink << " is: " << graph[source][sink] << endl;
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    int graph[MAXN][MAXN];
    initializeGraph(graph, n);
    readEdge(graph, m);

    int source, sink;
    cin >> source >> sink;

    floydWarshall(graph, n);
    printResult(graph, source, sink);

    return 0;
}

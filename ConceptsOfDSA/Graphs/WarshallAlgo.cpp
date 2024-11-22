#include <iostream>
using namespace std;

void warshallAlgorithm(int graph[][10], int N) {
    //Create a reachability matrix initialized with the adjacency matrix
    int reach[N][10];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            reach[i][j] = graph[i][j];
        }
    }

    //Apply Warshall's Algorithm
    for (int k = 0; k < N; k++) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                reach[i][j] = reach[i][j] || (reach[i][k] && reach[k][j]);
            }
        }
    }

    //Output
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << reach[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int N;
    cin >> N;

    int graph[10][10];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> graph[i][j];
        }
    }

    warshallAlgorithm(graph, N);

    return 0;
}

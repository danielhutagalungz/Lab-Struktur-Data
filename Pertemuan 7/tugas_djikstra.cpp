#include <iostream>
#include <vector>
#include <climits>
#include <cstdlib>
using namespace std;

class Graph {
private:
    int V;
    vector<vector<int>> adjMatrix;

    // Mencetak rute dari source sampai vertex v (A -> C -> B)
    void cetakRute(vector<int>& parent, int v) {
        if (parent[v] != -1) {
            cetakRute(parent, parent[v]);
            cout << " -> ";
        }
        cout << char('A' + v);
    }

public:
    Graph(int jumlahVertex) {
        V = jumlahVertex;
        adjMatrix.resize(V, vector<int>(V, 0));
    }

    void addEdge(int u, int v, int weight) {
        adjMatrix[u][v] = weight;
        adjMatrix[v][u] = weight;
    }

    // tujuan = -1 -> tampilkan ke semua lokasi
    // tujuan >= 0 -> tampilkan hanya ke lokasi tujuan
    void dijkstra(int source, int tujuan = -1) {
        vector<int> distance(V, INT_MAX);
        vector<int> parent(V, -1);
        vector<bool> visited(V, false);
        distance[source] = 0;

        for (int i = 0; i < V; i++) {
            int u = -1;

            for (int j = 0; j < V; j++) {
                if (!visited[j] &&
                    (u == -1 || distance[j] < distance[u])) {
                    u = j;
                }
            }

            if (u == -1 || distance[u] == INT_MAX)
                break;

            visited[u] = true;

            for (int v = 0; v < V; v++) {
                if (adjMatrix[u][v] != 0 && !visited[v]) {
                    int newDistance = distance[u] + adjMatrix[u][v];

                    if (newDistance < distance[v]) {
                        distance[v] = newDistance;
                        parent[v] = u; // simpan asal rute
                    }
                }
            }
        }

        cout << "Rute terpendek dari lokasi " << char('A' + source) << ":" << endl;

        for (int i = 0; i < V; i++) {
            if (i == source) continue;
            if (tujuan != -1 && i != tujuan) continue;

            cout << char('A' + source) << " ke " << char('A' + i) << " : ";
            if (distance[i] == INT_MAX) {
                cout << "Tidak terjangkau" << endl;
            } else {
                cetakRute(parent, i);
                cout << " (" << distance[i] << " km)" << endl;
            }
        }
    }
};

int main() {
    system("cls");
    Graph graph(6);

    // A=0, B=1, C=2, D=3, E=4, F=5
    graph.addEdge(0, 1, 4); // A-B
    graph.addEdge(0, 2, 2); // A-C
    graph.addEdge(1, 2, 1); // B-C
    graph.addEdge(1, 3, 5); // B-D
    graph.addEdge(1, 4, 3); // B-E
    graph.addEdge(2, 3, 8); // C-D
    graph.addEdge(2, 4, 6); // C-E
    graph.addEdge(3, 4, 2); // D-E
    graph.addEdge(3, 5, 4); // D-F
    graph.addEdge(4, 5, 3); // E-F

    // Rute terpendek dari A ke semua lokasi
    graph.dijkstra(0);

    // Rekomendasi rute berdasarkan input pengguna
    char asal, tujuan;
    cout << "\nMasukkan lokasi asal (A-F)   : ";
    cin >> asal;
    cout << "Masukkan lokasi tujuan (A-F) : ";
    cin >> tujuan;

    int s = toupper(asal) - 'A';
    int t = toupper(tujuan) - 'A';

    if (s < 0 || s > 5 || t < 0 || t > 5) {
        cout << "Input tidak valid!" << endl;
    } else {
        cout << "\nRekomendasi rute tercepat:" << endl;
        graph.dijkstra(s, t);
    }

    return 0;
}
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Graph {
    private:
        int numberVertex;
        vector<vector<int>> adjMatrix;

    public:
        Graph (int banyakTitik) {
            numberVertex = banyakTitik;
            adjMatrix.resize(numberVertex, vector<int>(numberVertex, 0));
        }

    void addEdge(int i, int j) {
        if (i >= 0 && i<numberVertex && j>=0 && j<numberVertex) {
            adjMatrix[i][j] = 1;
            adjMatrix[j][i] = 1;
        } else {
            cout << "Index nonvalid" << endl;
        }
    }

    void printAdjMatrix() {
        cout << "  ";
        for (int i = 0; i<numberVertex; i++) {
            cout << char('A' + i) << " ";
        }
        cout << endl;
        for (int i = 0; i<numberVertex; i++) {
            cout << char('A' + i) << " ";
            for (int j = 0; j<numberVertex; j++) {
                cout << adjMatrix[i][j] << " ";
            }
            cout << endl;
        }
    }

    void bfs (int startVertex) {
        if (startVertex < 0 || startVertex >= numberVertex) {
            cout << "Vertex awal nonvalid" << endl;
            return;
        }

        vector<bool> visited(numberVertex, false);
        queue<int> titikVisit;

        visited[startVertex] = true;
        titikVisit.push(startVertex);

        while (!titikVisit.empty()) {
            int currentVertex = titikVisit.front();
            titikVisit.pop();
            cout << char('A' + currentVertex) << " ";

            for (int i = 0; i < numberVertex; i++) {
                if (adjMatrix[currentVertex][i] == 1 && !visited[i]) {
                    visited[i] = true;
                    titikVisit.push(i);
                }
            }
        }
        cout << endl;
    }
};

int main() {
    system("cls");
    Graph graphh(6);
    char a, b;

    int jumlahEdge;
    cout << "Jumlah edge: ";
    cin >> jumlahEdge;

    for (int k = 0; k < jumlahEdge; k++) {
        cout << "Edge " << k + 1 << " (cth : a b): ";
        cin >> a >> b;
        graphh.addEdge(a - 'a', b - 'a');
    }

    cout << endl;
    graphh.printAdjMatrix();

    char start;
    cout << endl << "Vertex awal: ";
    cin >> start;

    cout << "Urutan BFS: ";
    graphh.bfs(start - 'a');

    return 0;
}
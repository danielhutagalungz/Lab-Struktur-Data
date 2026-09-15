#include <iostream>
using namespace std;

struct Node {
    int dataMahasiswa;
    Node* next;
};


int main() {
    system ("cls");
    int n, nilai;

    cout << "Berapa jumlah data mahasiswanya : ";
    cin >> n;

    Node* head = nullptr;
    Node* tail = nullptr;

    for (int i = 1; i <= n; i++) {
        cout << "Masukkan data ke-" << i << ": ";
        cin >> nilai;

        Node* nodeBaru = new Node();
        nodeBaru->dataMahasiswa = nilai;
        nodeBaru->next = nullptr;

        if (head == nullptr) {
            head = nodeBaru;
            tail = nodeBaru;
        }
        else {
            tail->next = nodeBaru;
            tail = nodeBaru;
        }
    }

    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->dataMahasiswa << " ";
        temp = temp->next;
    }


    
}
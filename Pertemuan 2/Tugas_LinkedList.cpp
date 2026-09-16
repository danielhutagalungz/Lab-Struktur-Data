#include <iostream>
using namespace std;

struct Node {
    int nilaiMahasiswa;
    Node* next;
};


int main() {
    system ("cls");
    int n, nilai, nilaiDepan, nilaiBelakang, nilaiTengah;

    cout << "Berapa jumlah data mahasiswanya : ";
    cin >> n;

    cout << endl;

    Node* head = nullptr;
    Node* tail = nullptr;

    for (int i = 1; i <= n; i++) {
        cout << "Masukkan nilai ke-" << i << " : ";
        cin >> nilai;

        Node* nodeBaru = new Node();
        nodeBaru->nilaiMahasiswa = nilai;
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

    cout << endl;

    // Tambah node di depan
    cout << "Tambah nilai di depan : ";
    cin >> nilaiDepan;

    Node* nodeDepan = new Node();
    nodeDepan->nilaiMahasiswa = nilaiDepan;
    nodeDepan->next = head;

    head = nodeDepan;

    // Tambah node di belakang
    cout << "Tambah nilai di belakang : ";
    cin >> nilaiBelakang;

    Node* nodeBelakang = new Node();
    nodeBelakang->nilaiMahasiswa = nilaiBelakang;
    nodeBelakang->next = nullptr;

    tail->next = nodeBelakang;
    tail = nodeBelakang;

    // Tambah node di tengah di antara node 3 dan 5
    cout << "Tambah nilai di tengah : ";
    cin >> nilaiTengah;

    Node* nodeTengah = new Node();
    nodeTengah->nilaiMahasiswa = nilaiTengah;
    
    Node* temp = head;
    for (int i = 1; i < 3 && temp != nullptr; i++) {
        temp = temp->next;
    }

    if (temp != nullptr) {
        nodeTengah->next = temp->next;
        temp->next = nodeTengah;
    } 
    
    // Tampilkan Linked List
    temp = head;
    while (temp != nullptr) {
        cout << temp->nilaiMahasiswa << " ";
        temp = temp->next;
    }
}
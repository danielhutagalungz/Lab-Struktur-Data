#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    system ("cls");
    // Membuat node pertama
    Node* node1 = new Node();
    node1->data = 10;
    node1->next = nullptr;

    // Membuat node kedua
    Node* node2 = new Node();
    node2->data = 20;
    node2->next = nullptr;

    node1->next = node2;

    // Tentukan head and tail
    Node* head = node1;
    Node* tail = node2;

    // Tambahkan node baru di akhir
    Node* node3 = new Node();
    node3->data = 50;
    node3->next = nullptr;

    tail->next = node3;
    tail = node3;

    // Tambah node di depan
    Node* node4 = new Node();
    node4->data = 5;
    node4->next = head;

    head = node4;

    // Tambah node di tengah antara 20 dan 50
    Node* node5 = new Node();
    node5->data = 30;
    node5->next = node2->next;

    node2->next = node5; // node2 menunjuk ke node baru


    // Tampilkan linked list
    Node* temp = head;

    while (temp!= nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;

    // Menghapus node paling belakang
    temp = head;

    while (temp->next != tail) {
        temp = temp->next;
    }

    delete tail;
    tail = temp;
    tail->next = nullptr;

    cout << "Setelah hapus node paling belakang : ";
    temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;

    // Menghapus node paling depan
    temp = head;
    head = head->next;
    delete temp;

    cout << "Setelah hapus node paling depan : ";
    temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;

    // Menghapus node di tengah (data = 20)
    temp = head;

    while (temp->next->data != 20) {
        temp = temp->next;
    }

    Node* hapus = temp->next;
    temp->next = hapus->next;
    delete hapus;

    cout << "Setelah hapus node di tengah (20) : ";

    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
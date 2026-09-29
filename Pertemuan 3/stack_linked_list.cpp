#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    system ("cls");
    Node* top = nullptr;

    // Push
    Node* node1 = new Node();
    node1->data = 10;
    node1->next = top;
    top = node1;

    Node* node2 = new Node();
    node2->data = 20;
    node2->next = top;
    top = node2;

    Node* node3 = new Node();
    node3->data = 30;
    node3->next = top;
    top = node3;

    // Tampilkan struct
    Node* temp = top;
    cout << "Isi stack : ";

    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;

    // Top
    cout << "Top : " << top->data << endl;

    // Size 
    int size = 0;
    temp = top;

    while (temp != nullptr) {
        size++;
        temp = temp->next;
    } 
    cout << "Size : " << size << endl;

    // Empty
    if (top == nullptr) {
        cout << "Stack Kosong" << endl;
    } else {
        cout << "Stack Tidak Kosong" << endl;
    }

    // Pop
    Node* hapus = top;
    cout << "Pop : " << top->data << endl;
    top = top->next;
    delete hapus;

    // Tampilkan setelah pop
    temp = top;
    cout << "Isi stack setekah di pop : ";

    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
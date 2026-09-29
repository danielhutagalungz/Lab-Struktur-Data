#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    system ("cls");
    Node* front = nullptr;
    Node* rear = nullptr;

    // Enqueue
    Node* node1 = new Node();
    node1->data = 10;
    node1->next = nullptr;
    if (front == nullptr) {
        front = node1;
        rear = node1;
    } else {
        rear->next = node1;
        rear = node1;
    }

    Node* node2 = new Node();
    node2->data = 20;
    node2->next = nullptr;
    if (front == nullptr) {
        front = node2;
        rear = node2;
    } else {
        rear->next = node2;
        rear = node2;
    }

    Node* node3 = new Node();
    node3->data = 30;
    node3->next = nullptr;
    if (front == nullptr) {
        front = node3;
        rear = node3;
    } else {
        rear->next = node3;
        rear = node3;
    }
    front = node1; // Assuming front should point to the first node

    // Tampilkan struct
    Node* temp = front;
    cout << "Isi queue : ";

    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;

    // Front
    cout << "Front : " << front->data << endl;

    // Empty
    if (front == nullptr) {
        cout << "Queue Kosong" << endl;
    } else {
        cout << "Queue Tidak Kosong" << endl;
    }

    // Dequeue
    Node* hapus = front;
    cout << "Dequeue : " << front->data << endl;
    front = front->next;
    delete hapus;

    // Tampilkan setelah dequeue
    temp = front;
    cout << "Isi queue setelah di dequeue : ";

    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
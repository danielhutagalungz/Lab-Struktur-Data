#include <iostream>
using namespace std;

#define MAX 5

int main() {
    system ("cls");
    int queue[MAX];
    int front = 0;
    int rear = -1;

    // Enqueue
    rear++;
    queue[rear] = 10;

    rear++; // 0+1 = 1
    queue[rear] = 20;
    
    rear++;
    queue[rear] = 30;
    
    // tampilkan isi queue
    for (int i = front; i <= rear; i++) {
        cout << queue[i] << " ";
    }

    cout << endl;

    // Front
    cout << "Front : " << queue[front] << endl; // indeks 0 = 10

    // Rear
    cout << "Rear : " << queue[rear] << endl; // indeks 2 = 30

    // Empty
    if (front > rear) {
        cout << "Queue Kosong" << endl;
    } else {
        cout << "Queue Tidak Kosong" << endl;
    }

    // Full
    if (rear == MAX - 1) {
        cout << "Queue Penuh" << endl;
    } else {
        cout << "Queue Tidak Penuh" << endl;
    }

    // Dequeue
    cout << "Dequeue : " << queue[front] << endl;
    front++; // 0+1 = 1

    cout << "Isi queue setelah dequeue : ";
    for (int i = front; i <= rear; i++) {
        cout << queue[i] << " ";
    }

    cout << endl;
}
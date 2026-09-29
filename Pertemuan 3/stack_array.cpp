#include <iostream>
using namespace std;

#define MAX 5

int main() {
    system ("cls");
    int stack[MAX];
    int top = -1;
    
    // Push
    top++; //-1+1 = 0
    stack[top] = 10;

    top++; // 0+1 = 1
    stack[top] = 20;
    
    top++;
    stack[top] = 30;
    
    // tampilkan isi stack
    for (int i = top; i >= 0; i--) {
        cout << stack[i] << " ";
    }

    cout << endl;

    // Top 
    cout << "Top : " << stack[top] << endl; // indeks 2 = 30

    // Size 
    cout << "Size : " << top+1 << endl; // 2+1 = 3

    // Empty
    if (top == 1) {
        cout << "Stack Kosong" << endl;
    } else {
        cout << "Stack Tidak Kosong" << endl;
    }

    // Pop
    cout << "Pop : " << stack[top] << endl;
    top--; // 2-1 = 1

    cout << "Isi stack setelah pop : ";
    for (int i = top; i >= 0; i--) {
        cout << stack[i] << " ";
    }

    cout << endl;
}
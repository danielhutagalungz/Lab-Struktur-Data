#include <iostream>
#include <string>
using namespace std;

#define MAX 20

int main() {
    system ("cls");

    char stack[MAX];
    int top = -1; 
    string kata;

    cout << "Masukkan sebuah kata : ";
    cin >> kata;

    if (kata.length() > MAX) {
        cout << "Kata maksimal " << MAX << " karakter." << endl;
    }

    // Push
    for (int i = 0; i < kata.length(); i++) {
        top++;
        stack[top] = kata[i];
    }

    // Tampilkan isi stack
    cout << "Isi stack : ";
    for (int i = top; i >= 0; i--) {
        cout << stack[i] << " ";
    }
    cout << endl;
}
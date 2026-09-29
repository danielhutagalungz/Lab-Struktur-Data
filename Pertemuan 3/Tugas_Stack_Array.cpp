#include <iostream>
#include <string>
using namespace std;

#define MAX 5

int main() {
    system ("cls");
    // Program membuat stack menggunakan array dengan menggunakan inputan sebuah kata

    char stack[MAX]; // Array untuk menyimpan karakter
    int top = -1; // Inisialisasi top stack
    string kata;

    cout << "Masukkan sebuah kata : ";
    cin >> kata;

    if (kata.length() > MAX) {
        cout << "Kata maksimal " << MAX << " karakter." << endl;
        return 0;
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
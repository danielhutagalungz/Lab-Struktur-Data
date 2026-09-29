#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* kiri;
    Node* kanan;
};

void tambah(Node*& root, int angka) {
    if (root == NULL) {
        root = new Node();
        root->data = angka;
        root->kiri = NULL;
        root->kanan = NULL;

        return;
    } 
    
    // inputan lebih besar dari data root
    else if (angka < root->data) {
        tambah(root->kiri, angka);

    // inputan lebih kecil dari data root
    } else {
        tambah(root->kanan, angka);
    }

    return;
}

int main() {
    system("cls");
    Node* root = NULL;
    int angka;

    cout << "Masukkan angka (0 untuk berhenti): ";
    cin >> angka;

    while (angka != 0) {
        tambah(root, angka);
        cout << "Masukkan angka (0 untuk berhenti): ";
        cin >> angka;
    }

    return 0;
}
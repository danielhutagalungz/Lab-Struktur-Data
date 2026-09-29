#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* kiri;
    Node* kanan;
};

//PRE-ORDER
void preOrder(Node* root) {
    if (root != NULL) {
        cout << root->data << " ";
        preOrder(root->kiri);
        preOrder(root->kanan);
    }
}

//IN-ORDER
void inOrder(Node* root) {
    if (root != NULL) {
        inOrder(root->kiri);
        cout << root->data << " ";
        inOrder(root->kanan);
    }
}

//POST-ORDER
void postOrder(Node* root) {
    if (root != NULL) {
        postOrder(root->kiri);
        postOrder(root->kanan);
        cout << root->data << " ";
    }
}

void tambah(Node*& root, int angka) {
    if (root == NULL) {
        root = new Node();
        root->data = angka;
        root->kiri = NULL;
        root->kanan = NULL;

        return;
    } 
    
    // inputan lebih kecil dari data root
    else if (angka < root->data) {
        tambah(root->kiri, angka);

    // inputan lebih besar dari data root
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
        cin >> angka;
    }

    cout << "Pre Order : ";
    preOrder(root);

    cout << endl;

    cout << "In Order : ";
    inOrder(root);

    cout << endl;

    cout << "Post Order : ";
    postOrder(root);

    cout << endl;

    return 0;
}
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

int main() {
    system("cls");
    
    // Membuat root
    Node* root = new Node();
    root->data = 15;
    root->kiri = NULL;
    root->kanan = NULL;

    // Membuat anak kiri
    root->kiri = new Node();
    root->kiri->data = 27;
    root->kiri->kiri = NULL;
    root->kiri->kanan = NULL;

    // Membuat anak kanan
    root->kanan = new Node();
    root->kanan->data = 30;
    root->kanan->kiri = NULL;
    root->kanan->kanan = NULL;

    // Membuat anak kiri dari 27
    root->kiri->kiri = new Node();
    root->kiri->kiri->data = 25;
    root->kiri->kiri->kiri = NULL;
    root->kiri->kiri->kanan = NULL;

    // Membuat anak kanan dari 27
    root->kiri->kanan = new Node();
    root->kiri->kanan->data = 29;
    root->kiri->kanan->kiri = NULL;
    root->kiri->kanan->kanan = NULL;

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
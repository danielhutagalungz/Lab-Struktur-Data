#include <iostream>
#include <string>
using namespace std;

int main() {
    system("cls");
    string data[100];
    int n;

    cout << "Masukkan jumlah kata : ";
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        cout << "Kata ke-" << i + 1 << " : ";
        getline(cin, data[i]);
    }

    cout << "\nProses Insertion Sort" << endl;

    for (int i = 1; i < n; i++) {
        string key = data[i];
        int j = i - 1;

        cout << "\nLangkah " << i << " (key = " << key << ")" << endl;

        while (j >= 0 && data[j] > key) {
            data[j + 1] = data[j];   
            j--;
            cout << "Geser : ";
            for (int k = 0; k < n; k++) {
                cout << data[k] << " ";
            }
            cout << endl;
        }

        data[j + 1] = key;

        cout << "Hasil insertion sort langkah " << i << " : ";
        for (int k = 0; k < n; k++) {
            cout << data[k] << " ";
        }
        cout << endl;
    }

    cout << "\nHasil akhir insertion sort : ";
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
    cout << endl;

    return 0;
}
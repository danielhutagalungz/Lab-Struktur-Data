#include <iostream>
using namespace std;
int main() {
    system("cls");
    // int nilai[4] = {};


    // for (int i = 0; i < 4; i++) {
    //     cout << "input nilai : ";
    //     cin >> nilai[i];
    // }

    // for (int i = 0; i < 4; i++) {
    //     cout << nilai[i] << endl;
    // }

    // DYNAMIC ARRAY
    // int n;

    // cout << "Masukkan panjang array : ";
    // cin >> n;

    // int *data = new int[n];

    // // for (int i = 0; i < n; i++) {
    // //     cout << "input data : ";
    // //     cin >> data[i];
    // // }

    // // for (int i = 0; i < n; i++) {
    // //     cout << data[i] << endl;
    // // }

    // for (int i = 0; i < n; i++) {
    //     data[i] = i * 5;
    //     cout << data[i];

    //         if (i == n - 1) {
    //             cout << endl;
    //         } else {
    //             cout << ", ";
    //         }
    // }

    // delete[] data;

    // NESTED ARRAY (2D)
    // int nilai[3][5];
    // for (int i = 0; i < 3; i++) {
    //     for (int j = 0; j < 5; j++) {
    //         cout << "input nilai : ";
    //         cin >> nilai[i][j];
    //     }
    // }
    

    // for (int i = 0; i < 3; i++) {
    //     for (int j = 0; j < 5; j++) {
    //         cout << nilai[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // ARRAY 3D
    int nilai[2][3][4]; //Lapisan , Baris , Kolom
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                cout << "input nilai : ";
                cin >> nilai[i][j][k];
            }
        }
    }

    // cout << nilai[1][2][2] << endl;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                cout << nilai[i][j][k] << " ";
            }
            cout << endl;
        }
    }



    
}
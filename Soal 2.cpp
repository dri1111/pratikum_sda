#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    float ipk;
};

int main() {
    Mahasiswa mhs[5];
    int indeksTertinggi = 0;

    for(int i = 0; i < 5; i++) {
        cout << "Mahasiswa yang ke-" << i+1 << endl;
        cout << "Nama : ";
        cin >> mhs[i].nama;
        cout << "NIM  : ";
        cin >> mhs[i].nim;
        cout << "IPK  : ";
        cin >> mhs[i].ipk;
        cout << endl;

        if(mhs[i].ipk > mhs[indeksTertinggi].ipk) {
            indeksTertinggi = i;
        }
    }

    cout << "Mahasiswa IPK tertinggi:" << endl;
    cout << "Nama : " << mhs[indeksTertinggi].nama << endl;
    cout << "NIM  : " << mhs[indeksTertinggi].nim << endl;
    cout << "IPK  : " << mhs[indeksTertinggi].ipk << endl;

    return 0;
}
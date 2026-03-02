#include <iostream>
using namespace std;

int FindMin(int A[], int n, int &indexMin) {
    int min = A[0];
    indexMin = 0;

    for(int i = 1; i < n; i++) {
        if(A[i] < min) {
            min = A[i];
            indexMin = i;
        }
    }
    return min;
}

int main() {
    int A[8] = {1, 1, 2, 3, 5, 8, 13, 21};
    int indexMin;

    int minimum = FindMin(A, 8, indexMin);

    cout << "Nilai minimum : " << minimum << endl;
    cout << "Index minimum : " << indexMin << endl;

    return 0;
}
//Analisis dari Kompleksitas program di atas yaitu
//
//Perulangan berjalan dari indeks 1 sampai n-1.
//Jumlah perbandingan tetap sebanyak n-1 kali.
//
//Jadi Analisis program tersebut:
//
//Best Case = O(n)
//
//Worst Case = O(n)
//
//Karena akan tetap memeriksa keseluruhan elemen.
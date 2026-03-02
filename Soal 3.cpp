#include <iostream>
using namespace std;

void reverseArray(int* arr, int n) {
    int* awal = arr;
    int* akhir = arr + n - 1;

    while(awal < akhir) {
        int temp = *awal;
        *awal = *akhir;
        *akhir = temp;

        awal++;
        akhir--;
    }
}

int main() {
    int arr[7] = {2, 3, 5, 7, 11, 13, 17};

    cout << "Awal sebelum dibalik:" << endl;
    for(int i = 0; i < 7; i++) {
        cout << arr[i] << endl;
    }

    reverseArray(arr, 7);

    cout << "Saat setelah dibalik menjadi:" << endl;
    for(int i = 0; i < 7; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

void tukar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;

    cout << "Sebelum ditukar:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    tukar(x, y);

    cout << "Sesudah ditukar:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}
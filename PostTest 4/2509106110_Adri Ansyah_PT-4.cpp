#include <iostream>
#include <string>
using namespace std;
// SOAL NODE
struct Node {
    string namaPenumpang;
    string rute;
    Node* next;
};
// SOAL QUEUE 
Node* front = NULL;
Node* rear = NULL;
// SOAL STACK 
Node* top = NULL;
// SOAL ENQUEUE
void enqueue(string nama, string rute) {
    Node* baru = new Node;
    baru->namaPenumpang = nama;
    baru->rute = rute;
    baru->next = NULL;

    if (rear == NULL) {
        front = rear = baru;
    } else {
        rear->next = baru;
        rear = baru;
    }

    cout << "Penumpang masuk antrian!\n";
}
// SOAL DEQUEUE
void dequeue() {
    if (front == NULL) {
        cout << "Antrian kosong!\n";
        return;
    }

    Node* temp = front;

    cout << "Memproses tiket:\n";
    cout << "Nama: " << temp->namaPenumpang << endl;
    cout << "Rute: " << temp->rute << endl;

    // Pindahkan ke stack
    Node* baru = new Node;
    baru->namaPenumpang = temp->namaPenumpang;
    baru->rute = temp->rute;
    baru->next = top;
    top = baru;

    front = front->next;

    if (front == NULL) {
        rear = NULL;
    }

    delete temp;
}
// UNTUK PUSH 
void push(string nama, string rute) {
    Node* baru = new Node;
    baru->namaPenumpang = nama;
    baru->rute = rute;
    baru->next = top;
    top = baru;

    cout << "Data masuk ke riwayat!\n";
}
// UNTUK POP
void pop() {
    if (top == NULL) {
        cout << "Riwayat kosong!\n";
        return;
    }

    Node* temp = top;
    cout << "Menghapus riwayat: " << temp->namaPenumpang << endl;

    top = top->next;
    delete temp;
}
// UNTUK PEEK
void peek() {
    if (front != NULL) {
        cout << "Antrian terdepan: "
             << front->namaPenumpang << endl;
    } else {
        cout << "Antrian kosong\n";
    }

    if (top != NULL) {
        cout << "Riwayat terakhir: "
             << top->namaPenumpang << endl;
    } else {
        cout << "Riwayat kosong\n";
    }
}
// UNTUK TAMPIL ANTRIAN
void tampilAntrian() {
    if (front == NULL) {
        cout << "Antrian kosong!\n";
        return;
    }

    cout << "=== DAFTAR ANTRIAN ===\n";
    Node* p = front;
    while (p != NULL) {
        cout << "Nama: " << p->namaPenumpang
             << " | Rute: " << p->rute << endl;
        p = p->next;
    }
}
// UNTUK TAMPIL RIWAYAT
void tampilRiwayat() {
    if (top == NULL) {
        cout << "Riwayat kosong!\n";
        return;
    }

    cout << "=== RIWAYAT TRANSAKSI ===\n";
    Node* p = top;
    while (p != NULL) {
        cout << "Nama: " << p->namaPenumpang
             << " | Rute: " << p->rute << endl;
        p = p->next;
    }
}
// MENU UTAMA
int main() {
    int pilih;
    string nama, rute;

    do {
        cout << "\n=== MENU KERETA API (Linked List) ===\n";
        cout << "1. Enqueue (Tambah Antrian)\n";
        cout << "2. Dequeue (Proses Tiket)\n";
        cout << "3. Push Riwayat\n";
        cout << "4. Pop Riwayat\n";
        cout << "5. Peek\n";
        cout << "6. Tampil Antrian\n";
        cout << "7. Tampil Riwayat\n";
        cout << "0. Keluar\n";
        cout << "Pilih: ";
        cin >> pilih;
        cin.ignore();

        switch (pilih) {
        case 1:
            cout << "Nama: ";
            getline(cin, nama);
            cout << "Rute: ";
            getline(cin, rute);
            enqueue(nama, rute);
            break;

        case 2:
            dequeue();
            break;

        case 3:
            cout << "Nama: ";
            getline(cin, nama);
            cout << "Rute: ";
            getline(cin, rute);
            push(nama, rute);
            break;

        case 4:
            pop();
            break;

        case 5:
            peek();
            break;

        case 6:
            tampilAntrian();
            break;

        case 7:
            tampilRiwayat();
            break;
        }

    } while (pilih != 0);

    return 0;
}

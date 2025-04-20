#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama;    // Variable to store the name
    string nim;     // Variable to store the student ID
    string alamat;  // Variable to store the address
};

int main() {
    // Create an object of struct Mahasiswa
    Mahasiswa mhs;

    // Input student details
    cout << "Masukan nim = ";
    cin >> mhs.nim;
    cout << "Masukan nama = ";
    cin >> mhs.nama;
    cout << "Masukan alamat = ";
    cin >> mhs.alamat;

    cout << endl;
    cout << "Menampilkan Data" << endl;
    cout << endl;

    // Display student details
    cout << "NIM = " << mhs.nim << endl;
    cout << "Nama = " << mhs.nama << endl;
    cout << "Alamat = " << mhs.alamat << endl;
}
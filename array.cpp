#include <iostream>
using namespace std;

// Deklarasi array tanpa ukuran,wajib di isi datanya
int nilai[] = {1, 2, 4, 7,};

// deklarasi array dengan ukuran dan di beri nilai awal
int nilaiDua[3] = {1, 2, 3,};

// deklarasi array dengan ukuran, tanpa nilai awal
string nama[4];

int main()
 {
    
    cout << "Nilai array ke 3 = " << nilai[2] << endl;
    Nilai[2] = 100;
    cout << "array ke 3 = " << nilai[2] << endl;
    
    //mengisi array dengan menggunakan looping for
    for (int i = 0; i < 4; i++)
    {
        cout << "Masukan nama ke " << i + 1 << " = ";
        cin << nama [i];
    }

    cout << endl;
    cout << "Menampilkan Array Nama" << endl;
    cout << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << "Nama ke " << i + 1 << " = "<<Nama [i] << endl;
    }
}

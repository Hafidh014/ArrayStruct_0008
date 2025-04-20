#include <iostream>
using namespace std;

struct DetailAlamat
{
    string kota;
    string provinsi;
};

struct Mahasiswa 
{
    string nama;
    string nim;
    DetailAlamat;
};
int main()
{
    // membuat object struct dalam array 
    Mahasiswa mhs[2];
    for (int i = 0; i <2; i++)
    {
        cout <<"Mahasiswa ke-" << i + 1 <<endl;
        cout <<"Masukan nim =";
        cin >>mhs[i].nim;
        cout <<"Masukan nama = ";
        cin >> mhs[i].nama;
        cout <<"Masukan kota = ";
        cin >> mhs[i].alamat.kota;
        cout <<"Masukan provisi = ";
        cin >> mhs[i].alamat.provinsi;
    }
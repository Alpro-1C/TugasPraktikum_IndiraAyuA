#include <iostream>

using namespace std;

int main() {
    int instruksi;

cout << "Pilihlah bentuk yang ingin kamu hitung luasnya:" << endl;
cout << "1. Persegi" << endl;
cout << "2. Segitiga" << endl;
cout << "3. Persegi Panjang" << endl;
//Menginput instruksi yang tertera
cout << "Luas yang ingin dicari";
cin >> instruksi;

//Program Switch Case, yang didalamnya terdapat 3 Program Case
    switch (instruksi){
//Ini luas persegi (1)
    case 1:
        //variabel
        int s, lpersegi;
        //input nilai
        cout << "Masukkan Panjang Sisi Persegi";
        cin >> s;
        lpersegi= s*s;
        cout << "Maka, luas perseginya adalah";
        break;

//Ini luas persegi panjang (2)
    case 2:
        //variabel
        int p,l,lpersegipanjang;
        //input nilai
        cout << "Masukkan Panjang Persegi Panjang";
        cin >> p;
        cout << "Masukkan Lebar Persegi Panjang";
        cin >> l;
        lpersegipanjang= p*l;
        cout << "Maka, luas persegi panjangnya adalah";
        break;

//Ini luas segitiga (3)
    case 3:
        //variabel
        int a,t,lsegitiga;
        //input nilai
        cout << "Masukkan Panjang Alas Segitiga";
        cin >> a;
        cout << "Masukkan Tinggi Segitiga";
        cin >> t;
        lsegitiga= 0.5*a*t;
        cout << "Maka, luas segitiganya adalah";
        break;

    case 4:
    default:
        cout << "Opsi Yang Dipilih tidak Ditemukan";

return 0;
}}

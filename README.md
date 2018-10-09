# praktikum1


# LATIHAN1.cpp : Program menghitung luas persegi panjang

*Alur algoritma*
a. Masukan nilai panjang (p) persegi oanjang.;
b. masukan nilai lebar (l) persegi panjang.;
c. masukan rumus luas(luas)= panjang(p) x lebar(l);
d. tampilkan hasil luas persegi panjang;

program menggunakan c++
#include <iostream>

using namespace std;
int main ()
{
    int p,l,luas;
cout<<"masukan panjjang persegi panjang: ";
cin>>p;
cout<<"masukan lebar persegi panjang: ";
cin>>l;

luas=p*l;
cout<<"luas persegi panjang adalah " <<luas;
return 0;

}

# latihan2.cpp : mengetahui suatu bilangan adalah ganjil atau genap

*Alur algoritma*
a. input kedua bilangan;
b. jika bilangan yang di input hasilnya 2/0 hasilnya "genap";
c. jika bilagan yang di input selain genap hasilnya "ganjil";
d. cout hasilnya;

program menggunakan c++

#include <iostream>

using namespace std;

int main()
{
    int nilai,hasil;
    cout << "menentukan ganjil dan genap" << endl;
    cout << "masukan nilai = ";
    cin >> nilai;
    hasil= nilai%2;
    cout << "hasilnya adalah = ";
    if (hasil==0)
        cout << "genap";
    else
        cout << "ganjil";
        return 0;
}

#latiahan3.cpp : mencari bilangan terbesar dari dua bilanngan yang di inputkan

*Alur algoritma*
a. masukan kedua bilanngan variable angka1,angka2; 
b. deskripsikan besar,kecil;
c. masukaan bilanagan pertama, apabila bilangan yang di inputkann lebih besar dari yang kecil maka hasilnya besar;
d. masukaan bilanagan kedua, apabila bilangan yang di inputkann lebih kecil dari yang besar maka hasilnya kecil;
d. cout hasil;

program menggunakan c++

#include <iostream>
using namespace std;
int main()
{
    int angka1,angka2,besar,kecil;
    cout << "masukan angka ke-1: ";
    cin >> angka1;
    cout << "masukan angka ke-2: ";
    cin >> angka2;

    besar= angka1 > angka2 ? angka1 : angka2;
    kecil= angka1 < angka2 ? angka1 : angka2;

    cout << endl;
    cout << "angka" << besar << "lebih besar dari angka " << kecil << endl;
    cout << "angka" << kecil << "lebih kecil dari angka " << besar << endl;
}

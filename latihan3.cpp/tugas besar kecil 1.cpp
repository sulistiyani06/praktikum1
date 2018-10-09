#include<iostream>
using  namespace std;

int main () {

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


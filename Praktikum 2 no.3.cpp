#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
    int menu,Alas,Tinggi;
    float hasil;
        cout << "MENU SEGITIGA SIKU-SIKU" << endl;
        cout << "1. Hitung panjang sisis miring" << endl;
        cout << "2. Hitung luas" << endl;
        cout << "3. Hitung keliling" << endl;
        cout << "4. Keluar program" << endl;
        cout << "-------------------------------" << endl;
        cout << "Pilih Menu : ";
        cin >> menu;
        cout<<"\nMasukkan alas segitiga = ";
        cin>> Alas;
        cout<<"\nMasukkan tinggi segitiga = ";
        cin>> Tinggi;
    switch(menu) {
        case 1:
            hasil=sqrt((Alas*Alas)+(Tinggi*Tinggi));
            break;
        case 2:
            hasil=0.5*Alas*Tinggi;
            break;
        case 3:
            hasil=Alas+Tinggi+(sqrt((Alas*Alas)+(Tinggi*Tinggi)));
            break;
        case 4:
            exit(0);
            break;

    }
    cout << "-------------------------------" << endl;
    cout << "hasil = " << hasil;
    cout << "\n-------------------------------" << endl;
}

/*Buatlah program untuk mengetahui cicilan, total harga cicilan dan keuntungan dealer
dari pembelian sepeda motor anda, dengan ketentuan sebagai berikut :
Harga pokok = harga motor / lama kredit (dalam bln)
Bunga = harga pokok * 0.1
Cicilan = harga pokok + bunga
Total harga motor = cicilan * lama kredit (dalam bulan)
Keuntungan diler = total harga motor - harga motor*/

#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;
int main(){
    double hargaMotor,hargaPokok,bunga,cicilan,totalHargaPokok,keuntunganDiler,bulan;

    cout<<"harga motor = ";cin>>hargaMotor;
    cout<<"lama kredit dalam bulan (12 bulan) = ";cin>>bulan;
    hargaPokok=hargaMotor/bulan;
    bunga=hargaPokok*0.1;
    cicilan=hargaPokok+bunga;
    totalHargaPokok=cicilan*bulan;
    keuntunganDiler=totalHargaPokok-hargaMotor;
    cout<<"\n\ncicilan = "<<cicilan;
    cout<<"\ntotal harga pokok = "<<totalHargaPokok;
    cout<<"\nkeuntungan dealer = "<<keuntunganDiler;
    
    return 0;

getch ();
}
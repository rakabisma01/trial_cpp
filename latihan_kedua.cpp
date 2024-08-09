/*Buatlah program untuk menghitung nilai rata-rata dari mata kuliah pemrograman
terstruktur, dengan ketentuan sebagai berikut :
Nilai praktikum 40 %
Nilai teori 40 %
Nilai tugas dan final project 20 %*/

#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;
int main(){
    int nilaiPraktikum,nilaiTeori,nilaiTugas,hasilAkhir;

    cout<<"Nilai praktikum = ";cin>>nilaiPraktikum;
    cout<<"Nilai teori = ";cin>>nilaiTeori;
    cout<<"Nilai tugas dan final project = ";cin>>nilaiTugas;
    hasilAkhir=((0.4*nilaiPraktikum)+(0.4*nilaiTeori)+(0.2*nilaiTugas))/3;

    cout<<"\nHasil akhir rata-rata = "<<hasilAkhir;

getch();
}
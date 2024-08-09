/* Buatlah program untuk menghitung sisi miring dan keliling segitiga siku-siku dengan sisi
tegak mendatar merupakan input dari keyboard (diinpukkan user), dengan rumus :
sisi miring = sqrt(alas*alas+tinggi*tinggi)
keliling = alas+tinggi+sisi miring */

#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;
int main(){
    float a,b,sisimiring,keliling;
   
    cout<<"Masukkan alas = ";cin>>a;
    cout<<"Masukkan tinggi = ";cin>>b;
    sisimiring=sqrt(a*a+b*b);
    keliling=a+b+sisimiring;
    cout<<"\nsisimiring = "<<sisimiring;
    cout<<"\nhasil keliling = "<<keliling;

    return 0;
    getch();
}
#include <iostream>

using namespace std;

int bilangan;
int satuan;
int puluhan;
int ratusan;
int identifikasi;
int identifikasi2;

int main(){
    cout << "Masukan Bilangan Bulat dari angka 101  hingga 999: ";
    cin >> bilangan;

    if  ( bilangan>101 && bilangan<1000 )
        { satuan= bilangan%10;
        identifikasi= (bilangan/10);
        puluhan= identifikasi%10;
        identifikasi2= identifikasi/10;
        ratusan = identifikasi2 % 10;
         cout << satuan << puluhan << ratusan<< endl ;}
   
    else {
    cout << "Silahkan input kembali dengan bilangan yang sudah di tentukan: "<< endl;
    }
 return main();
}


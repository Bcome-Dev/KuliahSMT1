#include <iostream>
using namespace std;

float koordinat;
float koordinat2;

int main(){
    cout<<"Masukan titik koordinat: ";
    cin >> koordinat>> koordinat2;

    if (koordinat>0 & koordinat2>0){
        cout<<"Kuadran I"<<endl;
    }
    else if (koordinat<0 & koordinat2>0){
        cout<<"Kuadran II"<<endl;
    }
        else if (koordinat<0 & koordinat2<0){
        cout<<"Kuadran III"<<endl;
    }
     else if (koordinat>0 & koordinat2<0){
        cout<<"Kuadran IV"<<endl;
    }
        else if (koordinat==0 & koordinat2==0){
        cout<<"Pusat X"<<endl;
    }
     else if (koordinat2==0 & koordinat!=0){
        cout<<"Sumbu X"<<endl;
    }
        else if (koordinat==0 & koordinat2!=0){
        cout<<"Sumbu Y"<<endl;
    }
    else{
        cout << "Tolong masukan format yang sesuai: "<<endl;
    }

}
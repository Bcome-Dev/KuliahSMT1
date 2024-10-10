#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


float volume, luaspermukaan, diagonalsisi, diagonalruang, keliling, sisi;

int main(){
    cout << "Masukan panjang sisi kubus : ";
    cin >> sisi;

volume= sisi*sisi*sisi;
luaspermukaan= 6*(sisi*sisi);
diagonalsisi= sqrt(2)*sisi;
diagonalruang= sqrt(3)*sisi;
keliling= 12*sisi;

cout << "Panjang Sisi :" << sisi << " cm" << endl << endl << 
"Volume :" << volume << " cm3" <<endl<<
"Luas Permukaan : " << luaspermukaan << " cm2" <<endl<<
"Diagonal Sisi : "<< fixed<< setprecision(2) << diagonalsisi<< " cm" <<endl<<
"Diagonal Ruang: "<<fixed<< setprecision(2) << diagonalruang << " cm" <<endl<< 
"Keliling Kubus : " <<fixed<< setprecision(0) << keliling << " cm" << endl;

return main();
}
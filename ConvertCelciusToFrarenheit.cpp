#include <iostream>
using namespace std;

int celcius;
int farenheit;
int main(){
    cout << "Silahkan input calcius yang akan di convert: ";
    cin >> celcius;

farenheit = (celcius-32) * 5/9;
cout << farenheit;

}
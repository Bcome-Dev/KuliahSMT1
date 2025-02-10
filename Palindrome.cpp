#include <iostream>
#include <cctype>
using namespace std;

bool cekPalindrome(const string &str, int kiri, int kanan) {
    if (kiri >= kanan) return true; 
    if (tolower(str[kiri]) != tolower(str[kanan])) return false; 
    return cekPalindrome(str, kiri + 1, kanan - 1); 
}

int main() {
    string input;

    cout << "Masukkan string tanpa spasi: ";
    cin >> input;

    cout << input << (cekPalindrome(input, 0, input.length() - 1) ? " adalah palindrome." : " bukan palindrome.") << endl;

    return 0;
}

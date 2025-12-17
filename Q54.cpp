//Write a C++ program to print vowels and consonants separately.
#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Vowels: ";
    for (ch = 'A'; ch <= 'Z'; ch++) {
        if (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            cout << ch << " ";
    }

    cout << "\nConsonants: ";
    for (ch = 'A'; ch <= 'Z'; ch++) {
        if (!(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'))
            cout << ch << " ";
    }

    return 0;
}

// Write a C++ program to check whether a given number is an Automorphic Number or not.
#include <iostream>
using namespace std;

int main() {
    int num, square;
    cout << "Enter a number: ";
    cin >> num;

    square = num * num;

    int temp = num;
    bool isAutomorphic = true;

    while (temp > 0) {
        if (temp % 10 != square % 10) {
            isAutomorphic = false;
            break;
        }
        temp /= 10;
        square /= 10;
    }

    if (isAutomorphic)
        cout << num << " is an Automorphic Number.";
    else
        cout << num << " is not an Automorphic Number.";

    return 0;
}

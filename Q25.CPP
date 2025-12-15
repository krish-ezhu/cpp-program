//Write a C++ Program to check whether the first digit of a 3-digit number is odd or even.

#include <iostream>
using namespace std;

int main() {
    int num, firstDigit;

    cout << "Enter a 3-digit number: ";
    cin >> num;

    firstDigit = num / 100;

    if (firstDigit % 2 == 0)
        cout << "The first digit " << firstDigit << " is Even";
    else
        cout << "The first digit " << firstDigit << " is Odd";

    return 0;
}

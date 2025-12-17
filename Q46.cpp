// Write a C++ program to check whether a given number is a Buzz Number or not.
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 7 == 0 || num % 10 == 7) {
        cout << num << " is a Buzz Number.";
    } else {
        cout << num << " is not a Buzz Number.";
    }

    return 0;
}

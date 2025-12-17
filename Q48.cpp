//Write a C++ program to check whether a given number is a Magic Number or not.
#include <iostream>
using namespace std;

int main() {
    int num, sum;

    cout << "Enter a number: ";
    cin >> num;

    while (num > 9) {
        sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        num = sum;
    }

    if (num == 1)
        cout << "It is a Magic Number.";
    else
        cout << "It is not a Magic Number.";

    return 0;
}

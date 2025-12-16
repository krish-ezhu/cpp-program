// Write a C++ program to check whether a given number is a Perfect Number or not.
#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    // Find sum of proper divisors
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0)
            sum += i;
    }

    if (sum == num)
        cout << "Perfect number";
    else
        cout << "Not a Perfect number";

    return 0;
}

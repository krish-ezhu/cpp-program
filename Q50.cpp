// Write a C++ program to multiply two numbers without using * operator.
#include <iostream>
using namespace std;

int main() {
    int a, b, result = 0;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    for (int i = 1; i <= b; i++) {
        result += a;
    }

    cout << "Multiplication result = " << result;

    return 0;
}

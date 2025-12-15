//Write a C++ Program using switch case to print the season based on month number.(1-5:Summer,6-10:Wind,11-12:Rain).

#include <iostream>
using namespace std;

int main() {
    int month;

    cout << "Enter month number (1-12): ";
    cin >> month;

    switch (month) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "Season: Summer";
            break;

        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            cout << "Season: Wind";
            break;

        case 11:
        case 12:
            cout << "Season: Rain";
            break;

        default:
            cout << "Invalid month number";
    }

    return 0;
}

//Write a C++ Program to print the middle digit of a 3-digit number.
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    cout<<" Middle Digit of the Number : "<<(num / 10)%10;
    return 0;

}
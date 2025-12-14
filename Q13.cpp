//Write a C++ Program to print remainder of two numbers.
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int num1,num2,mod;
    cout<<"Enter a number 1 : ";
    cin>>num1;
    cout<<"Enter a number 2 : ";
    cin>>num2;
    mod=num1%num2;
    cout<<mod;
    return 0;
}

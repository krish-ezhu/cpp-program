//Write a C++ Program to print the given fractional number in 2-digit decimal format.
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int num;
    float fact=1;
    cout<<"Enter a number : ";
    cin>>num;
    for(int i=1;i<=num;i++){
        fact*=i;
    }
    cout<<"Factorial : "<<fixed<<setprecision(2)<<fact;
    return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    cout<<" Except Last Digit of the Number : "<<num / 10;
    return 0;
}
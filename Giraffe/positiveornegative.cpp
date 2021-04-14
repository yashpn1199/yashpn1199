#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter a number:";
    cin>>number;
    if(number<0)
        cout<<number<<" is a negative number.";
    else if(number==0)
        cout<<number<<" is neither a negative nor a positive number";
    else
        cout<<number<<" is a positive number.";
    return 0;
}

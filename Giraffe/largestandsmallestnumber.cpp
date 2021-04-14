#include<iostream>
using namespace std;
int main()
{
    double a,b,c;
    cout<<"Enter the values of a,b,c:";
    cin>>a>>b>>c;
    if(a>b&&a>c)
        cout<<"a is the largest number with value "<<a;
    else if(b>c&&b>a)
        cout<<"b is the largest number with value "<<b;
    else if(c>a&&c>b)
        cout<<"c is the largest number with value "<<c;
    cout<<"\n";
    if(a<b&&a<c)
        cout<<"a is the smallest number with value "<<a;
    else if(b<a&&b<c)
        cout<<"b is the smallest number with value "<<b;
    else
        cout<<"c is the smallest number with value "<<c;
    return 0;
}

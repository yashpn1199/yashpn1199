#include<iostream>
using namespace std;
int maximum(int a,int b);
int main()
{
    int a,b;
    cout<<"Enter the value of a and b:";
    cin>>a>>b;
    int c=maximum(a,b);
    return 0;
}
    int maximum(int x, int y)
    {
        if(x>y)
            cout<<"x is the greatest with number:"<<x<<endl;
        else if(y>x)
            cout<<"y is the greatest with number:"<<y<<endl;
        else
            cout<<"They both are equal"<<endl;
    }


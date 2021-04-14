#include<iostream>
using namespace std;
class biggest
{
public:
    int a,b;
    void read();
    int big();
    void display();
};
void biggest::read()
{
    cout<<"Enter the values of two numbers to check which one is big: ";
    cin>>a>>b;
}
int biggest::big()
{
    if(a>b)
        return a;
    else
        return b;
}
void biggest::display()
{
    int c=big();
    cout<<"The biggest number among them is "<<c<<endl;
}
int main()
{
    biggest n;
    n.read();
    n.big();
    n.display();
    return 0;
}

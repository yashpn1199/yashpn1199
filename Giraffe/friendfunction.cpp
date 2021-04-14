#include<iostream>
using namespace std;
class A;
class B
{
    int b;
public:
    void getval(int);
    void display();
    friend void add(A,B);
};
void B::getval(int y)
{
    b=y;
}
void B::display()
{
    cout<<"The value of b: "<<b<<endl;
}
class A
{
    int a;
public:
    void getval(int);
    void display();
    friend void add(A,B);
};
void A::getval(int x)
{
    a=x;
}
void A::display()
{
    cout<<"The value of a: "<<a<<endl;
}
void add(A ob1,B ob2)
{
    cout<<"The addition of a and b: "<<ob1.a+ob2.b<<endl;
}
int main()
{
    A a;
    B b;
    a.getval(1231);
    b.getval(4232);
    a.display();
    b.display();
    add(a,b);
    return 0;
}

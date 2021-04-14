#include<iostream>
using namespace std;
class employee
{
    public:
    string name;
    float salary;
    void read();
    void display();
};
void employee::read()
{
    cout<<"Enter the name of employee:";
    cin>>name;
    cout<<"Enter the salary of "<<name<<" :";
    cin>>salary;
    cout<<"\n";
}
void employee::display()
{
    cout<<"The name of the employee: "<<name<<endl;
    cout<<"The salary of the employee: "<<salary<<endl;
    cout<<"\n";
}
int main()
{
    int i;
    employee s[4];
    for(i=0;i<4;i++)
        s[i].read();
    for(i=0;i<4;i++)
        s[i].display();
    return 0;

}

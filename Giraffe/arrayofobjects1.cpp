#include<iostream>
using namespace std;
class employee
{
    int employeeno;
    float salary;
    public:
    employee(int eno,float sal)
    {
        this->employeeno=eno;//'this' operator ..
        this->salary=sal;//
    }
    void display()
    {
    cout<<"Employee ID number: "<<employeeno<<endl;
    cout<<"Employee Salary: "<<salary<<endl;
    cout<<"\n";
    }
};
int main()
{
    employee e1(2001,27000);
    employee e2(2002,34000);
    e1.display();
    e2.display();
    return 0;
}

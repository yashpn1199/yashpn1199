#include<iostream>
using namespace std;
class employee
{
    public:
    string employee_name;
    int employee_id;
    float employee_salary;
    void read()
    {
        cout<<"Enter the name of the employee:";
        cin>>employee_name;
        cout<<"Enter the ID of the employee:";
        cin>>employee_id;
        cout<<"Enter the salary per month of the employee:";
        cin>>employee_salary;
    }
    void display()
    {
        cout<<"Employee Name: "<<employee_name<<endl;
        cout<<"Employee ID: "<<employee_id<<endl;
        cout<<"Employee Salary p/m "<<employee_salary<<endl;
    }
};
int main()
{
    employee no1;
    no1.read();
    no1.display();
    cout<<"\n";
    employee no2;
    no2.read();
    no2.display();
    return 0;
}

#include<iostream>
using namespace std;
class student
{
    public:
    string student_name;
    string student_rollno;
    void read()
    {
        cout<<"Enter the Student Name:";
        cin>>student_name;
        cout<<"Enter the Student Rollno:";
        cin>>student_rollno;
    }
    void display()
    {
        cout<<"Student Name: "<<student_name<<endl;
        cout<<"Student Rollno: "<<student_rollno<<endl;
    }
};
    int main()
    {
        student no1;
        no1.read();
        no1.display();
        cout<<"\n";
        student no2;
        no2.read();
        no2.display();
        return 0;
    }

#include<iostream>
using namespace std;
#define max 10
struct student
{
    char name[30];
    int rollno;
    int marks;
};
int main()
{
    student s;
    cout<<"\n\tEnter the details of students"<<endl;
    cout<<"Enter the name of the student: ";
    cin>>s.name;
    cout<<"Enter the roll no:";
    cin>>s.rollno;
    cout<<"Enter the marks out of 500:";
    cin>>s.marks;
    cout<<"Details of student "<<endl;
    cout<<"Name: "<<s.name<<endl;
    cout<<"Rollno: "<<s.rollno<<endl;
    cout<<"Marks: "<<s.marks<<endl;
    return 0;
}

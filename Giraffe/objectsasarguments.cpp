#include<iostream>
using namespace std;
class time
{
    int h;
    int m;
public:
    void gettime(int,int);
    void display();
    void sum(time,time);
};
void time::gettime(int hours,int minutes)
{
    h=hours;
    m=minutes;
}
void time:: display()
{
    cout<<"Hours: "<<h<<endl;
    cout<<"Minutes: "<<m<<endl;
    cout<<"\n"<<endl;
}
void time::sum(time t1,time t2)
{
    m=t1.m+t2.m;
    h=m/60;
    m=m%60;
    h=h+t1.h+t2.h;
}
int main()
{
    time t1,t2,t3;
    t1.gettime(5,40);
    t2.gettime(3,30);
    t3.sum(t1,t2);
    t1.display();
    t2.display();
    t3.display();
    return 0;
}

#include<iostream>
using namespace std;
class Bikers
{//access modifier//
    public:
    //data members//
    string Biker_name;
    int biker_age;
    string Bike_name;
    //member functions()//
    void printf()
    {
    cout<<"Biker name:"<<Biker_name<<endl;
    cout<<"Biker age:"<<biker_age<<endl;
    cout<<"Bike name:"<<Bike_name<<endl;
    }
};
int main()
{
    Bikers Number1;
    Number1.Biker_name="Yashwanth";
    Number1.biker_age=19;
    Number1.Bike_name="DucatiPanigaleV4R";
    Number1.printf();
    return 0;
}

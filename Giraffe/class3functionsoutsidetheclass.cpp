#include<iostream>
using namespace std;
class market
{
public:
    string item1,item2,item3;
    float p1,p2,p3;
    void read();
    void display();
};
    void market::read()
    {
        cout<<"Enter the name of item 1: \n";
        cin>>item1;
        cout<<"enter the price of the item 1: \n";
        cin>>p1;
        cout<<"Enter the name of item 2: \n";
        cin>>item2;
         cout<<"enter the price of the item 2: \n";
        cin>>p2;
        cout<<"Enter the name of item 3: \n";
        cin>>item3;
         cout<<"enter the price of the item 3: \n";
        cin>>p3;
    }
    void market::display()
    {
        cout<<"Name of item1: "<<item1<<endl;
        cout<<"Price: "<<p1<<endl;
        cout<<"Name of item2: "<<item2<<endl;
        cout<<"Price: "<<p2<<endl;
        cout<<"Name of item3: "<<item3<<endl;
        cout<<"Price: "<<p3<<endl;
    }
int main()
{
    market shift1;
    shift1.read();
    shift1.display();
    cout<<"\n";
    market shift2;
    shift2.read();
    shift2.display();
    return 0;
}

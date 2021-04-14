#include<iostream>
using namespace std;
class electronics
{
    public:
    string item1,item2,item3;
    float Budget,p1,p2,p3,s;
    void read();
    void display();
};
void electronics::read()
{
    cout<<"This is a wish list for the items your planning to invest on the electronics"<<endl;
    cout<<"\n";
    cout<<"Enter the budget you can afford:";
    cin>>Budget;
    cout<<"Enter the name of the first electronic device:";
    cin>>item1;
    cout<<"Enter the price of the "<<item1<<":";
    cin>>p1;
    cout<<"Enter the name of the second electronic device:";
    cin>>item2;
    cout<<"Enter the price of the "<<item2<<":";
    cin>>p2;
    cout<<"Enter the name of the third electronic device:";
    cin>>item3;
    cout<<"Enter the price of the "<<item3<<":";
    cin>>p3;
}
void electronics::display()
{
    cout<<"The electronic device is "<<item1<<" and its price is Rs"<<p1<< "/-"<<endl;
    cout<<"The electronic device is "<<item2<<" and its price is Rs"<<p2<< "/-"<<endl;
    cout<<"The electronic device is "<<item3<<" and its price is Rs"<<p3<< "/-"<<endl;
    cout<<"\n";
    cout<<"\n";
    s=p1+p2+p3;
    cout<<"The total pricing of all the electronic devices is Rs"<<s<< "/-"<<endl;
    if(s>Budget)
       {
        cout<<"You don't have enough budget to purchase your prescribed devices on this wishlist :(";
        cout<<"Better look into the necessary devices"<<endl;
       }
    else
    {
        cout<<"Your good to go! :)"<<endl;
    }
}
int main()
{
    electronics s1;
    s1.read();
    s1.display();
    return 0;
}

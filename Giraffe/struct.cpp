#include<iostream>
using namespace std;
struct family
{
    std::string first_name;
    std::string last_name;
    std::string covid_status;
};
int main()
{
    /*We can access the arguments inside the struct directly because their access modifier is public by default*/
    family member1;
    member1.first_name = "Yashwanth";
    member1.last_name = "Yadav";
    member1.covid_status = "Positive";
    cout<<"First name:"<<member1.first_name<<endl;
    cout<<"last name:"<<member1.last_name<<endl;
    cout<<"Covid Status:"<<member1.covid_status<<endl;
    family member2;
    member2.first_name = "Harshavardhan";
    member2.last_name = "Yadav";
    member2.covid_status = "Negative";
    cout<<"\n\n\nFirst name:"<<member2.first_name<<endl;
    cout<<"last name:"<<member2.last_name<<endl;
    cout<<"Covid Status:"<<member2.covid_status<<endl;
    return 0;
}

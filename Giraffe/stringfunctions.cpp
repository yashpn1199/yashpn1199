#include<iostream>
using namespace std;
int main()
{
    string charactername = "Yashwanth Yadav";
    cout<<charactername.length()<<endl;
    cout<<charactername[0]<<endl;
    string characternamesub;
    characternamesub = charactername.substr(1,4);
    return 0;
}

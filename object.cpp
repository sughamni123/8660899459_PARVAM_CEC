#include<iostream>
using namespace std;
class person
{
   public:
   string name;
   int age;
};
int main()
{
    person p;
    cout<<"Enter the name:";
    cin>>p.name;
    cout<<"Enter the age:";
    cin>>p.age;
    cout<<"\n Name: "<<p.name<<endl;
    cout<<"\n age:"<<p.age<<endl;
    return 0;
}
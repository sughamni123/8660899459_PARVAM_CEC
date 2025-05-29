#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter the Age:";
    cin>>age;
    try
    {
        if(age<18)
        throw(age);
        else
        cout<<"Access given";
    }
    catch(int age)

    {
        cout<<"Access denied:age must be above 18,but you are "<<age;
    }
    return 0;
    
}
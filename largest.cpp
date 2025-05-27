#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"Ente three values x, y,z:";
    cin>>x>>y>>z;
    if(x>y)
    {
    cout<<x<<"is the largest"<<endl;
    }
    else if(y>z)
    {
    cout<<y<<"is the largest"<<endl;
    }
    else
    {
    cout<<z<<"is the largest"<<endl;
    }
    return 0;
}
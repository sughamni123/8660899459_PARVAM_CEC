#include<iostream>
using namespace std;
int main()
{
    int n=5,i;
    cout<<"Multiplication table of 5 is:";
    for(i=1;i<=10;i++)
    {
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int num,den;
    cout<<"Enter 2 numbers:";
    cin>>num>>den;
    try
    {
        {
            if(den==0)
            throw(den);
            else
            cout<<num/den;
        }
    }
    catch(int den)
    {
        cout<<"Division by zero error:cannot divide by zero";
    }
    return 0;
}
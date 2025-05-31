#include<iostream>
using namespace std;
int main()
{
    int num,div=0;
    cout<<"Enter a number:";
    cin>>num;
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
            div+=i;
    }
    if(div==num)
    {
    cout<<num<<" is a perfect number"<<endl;
    }
    else
    {
    cout<<num<<" is not a perfect number"<<endl;
    }
    return 0;
}

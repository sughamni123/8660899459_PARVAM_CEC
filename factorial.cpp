#include<iostream>
using namespace std;
int main()
{
    int  n,i;
    double factorial=1;
    cout<<"Enter a positive integer:";
    cin>>n;
    if(n,0)
    {
    cout<<"factorial does not exists for negative numbers"<<endl;
    }
    else
    {
    for(i=1;i<=n;i++)
    {
    factorial*=i;
    }
    cout<<"Fcatorial of "<<n<<"is:"<<factorial<<endl;
}
return 0;
}
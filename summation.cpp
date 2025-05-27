#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"Enter the numbers:";
    cin>>n;
    for(i=0;i<=n;i++)
    {
        sum=sum+i;
        cout<<"Sum:"<<sum<<"\n";
    }
    cout<<"The sum is"<<sum<<endl;
    return 0;
}

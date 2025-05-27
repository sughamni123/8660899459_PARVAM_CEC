#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    cout<<"Enter the number of rows:";
    cin>>n;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(k=0;k<=1*i;k++)
        {
            cout<<" *";
        }
        cout<<endl;
    }
    return 0;
}
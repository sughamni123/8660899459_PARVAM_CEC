#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    cout<<"Enter the number of rows:";
    cin>>n;
    char ch='A';
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            cout<<" ";
        }
        for(k=0;k<=i;k++)
        {
            cout<<ch<<" ";
            ch++;
            if(ch>'Z') ch='A';
        }
        cout<<endl;
    }
    return 0;
}

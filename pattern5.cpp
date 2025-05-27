#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter the number of rows:";
    cin>>n;
    char ch='a';
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<ch<<" ";
            ch++;
            if(ch>'z')ch='a';
        }
        cout<<endl;
    }
    return 0;

}
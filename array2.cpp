#include <iostream>
using namespace std;
int main()
{
    const int n = 5;
    int i,arr1[n], arr2[n], sum[n],average;
    cout<<"Enter 5 elements for first array:\n";
    for(int i = 0; i < n; i++) 
    {
        cin >> arr1[i];
    }
    cout<<"Enter 5 elements for second array:\n";
    for(int i = 0; i < n; i++)
     {
        cin >> arr2[i];
    }
    for(int i = 0; i < n; i++) 
    {
        sum[i] = arr1[i] + arr2[i];
    }
    cout<<"Sum of arrays:\n";
    for(int i = 0; i < n; i++)
    {
        cout << sum[i] << " ";
    }
    average=(sum[i])/n;
    cout<<"Average of arrays:\n"<<average<<endl;
     return 0;
}
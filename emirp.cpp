#include <iostream>
using namespace std;
bool isPrime(int n)
 {
    if (n < 2) return false;
    for (int i=2;i<n;i++) 
    {
        if (n % i == 0)
            return false; 
    }
    return true; 
}
int reverse(int n) 
{
    int r=0;
    while (n>0) 
    {
        r=r*10 + n % 10; 
        n=n/10;           
    }
    return r;
}
int main()
 {
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int rev=reverse(num);
    if(isPrime(num)&&isPrime(rev)&&num!=rev)
        cout<<"Emirp number";
    else
        cout<<"Not an emirp number";

    return 0;
}
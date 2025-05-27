#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"Enter a value:";
    cin>>a;
    cout<<"Enter b value:";
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"Value after swapping:"<<a<<endl;
    cout<<"Value after swapping:"<<b<<endl;
    return 0;
}



#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"Enter a value:";
    cin>>a;
    cout<<"Enter b value:";
    cin>>b;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"Value after swapping:"<<a<<endl;
    cout<<"Value after swapping:"<<b<<endl;
    return 0;
}


#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"Enter a value:";
    cin>>a;
    cout<<"Enter b value:";
    cin>>b;
    a=a*b;
    b=a/b;
    a=a/b;
    cout<<"Value after swapping:"<<a<<endl;
    cout<<"Value after swapping:"<<b<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    char op;
    cout<<"Enter a number:";
    cin>>num1;
    cout<<"Enter a number:";
    cin>>num2;
    cout<<"Enter your choice(+,-,/,*):";
    cin>>op;
    switch(op)
    {
        case'+':
        cout<<"Result:"<<num1+num2<<endl;
        break;
        case'-':
        cout<<"Result:"<<num1-num2<<endl;
        break;
        case'*':
        cout<<"Result:"<<num1*num2<<endl;
        break;
        case'/':
        if(num2!=0)
        cout<<"Result:"<<num1/num2<<endl;
        else
        cout<<"Error:Division by zero!"<<endl;
        break;
        default:cout<<"Invalid choice!"<<endl;
    }
        return 0;
}

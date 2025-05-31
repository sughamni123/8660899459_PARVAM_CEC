#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n=0,v=0;
  char str[100];
  cout<<"Enter the string:";
  cin>>str;
  while(str[n]!='\0')
  {
  if(str[n]=='a'||str[n]=='e'||str[n]=='i'||str[n]=='o'||str[n]=='u'||str[n]=='A'||str[n]=='E'||str[n]=='I'||str[n]=='O'||str[n]=='U')
  {
  v++;
  }
  n++;
  }
  cout<<"The number of vowels in the string is "<<v<<endl;
  return 0;
}
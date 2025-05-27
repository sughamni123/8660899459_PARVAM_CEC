#include<iostream>
int main()
{
    int marks1=90,marks2=98,marks3=96,marks4=95,marks5=90,total,grade;
    float avg;
    std::cout<<"Name:shweta\n  Branch:ISE\n   Year:1st year\n  Sem:2nd sem \n  college:City engineering college\n"<<std::endl; 
    std::cout<<"marks1=90\n marks2=98\n marks3=96\n marks4=95\n marks5=90\n"<<std::endl;
    total=marks1+marks2+marks3+marks4+marks5;
    avg=(marks1+marks2+marks3+marks4+marks5)/5;
    std::cout<<"\n Total="<<total;
    std::cout<<"\n Average="<<avg;
    if(avg>90)
    std::cout<<"\n Grade A";
    else if(avg>70)
    std::cout<<"\n Grade B";
    else
    std::cout<<"\n Grade C";
    return 0;
}
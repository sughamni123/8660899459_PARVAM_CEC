//print summation of a number//
#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
    sum=sum+i;
    }
    printf("summation of number from 1 to %d is %d",n,sum);
    return 0;    
}
#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=10;i>=1;i--)
     printf("%d X %d = %d\n",i,n,i*n);
    return 0;   
}
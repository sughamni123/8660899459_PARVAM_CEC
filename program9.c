//1 4  9 16  25.....n//
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a value");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    int x=i*i;
    printf("%d, ",x);
    }
    return 0;
}
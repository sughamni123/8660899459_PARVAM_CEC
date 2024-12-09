#include<stdio.h>
int main()
{
    int i=2,ul=,ll=0;
    scanf("%d%d",&ul,&ll);
    i=ll;
    while(i<=ul)
    {
    if(i%2==0)
    printf("%d, ",i);
    i++;
    }
    return 0;
}
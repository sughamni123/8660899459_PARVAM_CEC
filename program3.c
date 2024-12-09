//program to check if a given number is positive or negative//
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    if(num<=0)
    printf("the number is negative\n",num);
    else
    printf("the number is positive\n",num);
    return 0;
}
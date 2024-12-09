#include<stdio.h>
int main()
{
    //c program to swap two integers M and N//
    int M,N;
    printf("Enter two values:\n");
    scanf("%d%d",&M,&N);
    printf("numbers before swapping:M=%d,N=%d\n",M,N);
    M=M+N;
    N=M-N;
    M=M-N;
    printf("numbers after swapping:M=%d,N=%d",M,N);
    
    return 0;


    
    

}
/*5
5 4
5 4 3
5 4 3 2
5 4 3 2 1
*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",j-1);
            }
            printf("\n");
    }
     return 0;
}
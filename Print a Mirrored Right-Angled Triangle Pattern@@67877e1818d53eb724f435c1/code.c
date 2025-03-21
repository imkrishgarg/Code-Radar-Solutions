#include<stdio.h>
int main()
{
    int num,i,j;
    scanf("%d",&num);
    for(i=2;i<=num;i++)
    {
        for(j=1;j<=num-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
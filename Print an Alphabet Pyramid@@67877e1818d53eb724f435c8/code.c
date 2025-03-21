#include<stdio.h>
int main()
{
    int num,i,j;
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    { int a=1;
        
        for(j=1;j<=i;j++)
        {
            int d=64;
            char ch=(char)d+a;
            printf("%c ",ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int num,i,j;
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
        for(j=1;j<=num;j++)
        {
            printf("*");
        }
        primtf("\n");
    }
    return 0;
}
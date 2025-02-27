#include <stdio.h>
int main()
{
    int num,i,j;
    char ch;
    ch="*";
    scanf("%d",&num);
    for(i=num;i>0;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
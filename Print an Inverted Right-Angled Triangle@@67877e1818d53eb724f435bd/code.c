#include <stdio.h>
int main()
{
    int num,i;
    char ch;
    ch="*";
    scanf("%d",&num);
    for(i=num;i>0;i--)
    {
        printf("%c*%d",ch,i);
        printf("\n");
    }
    return 0;
}
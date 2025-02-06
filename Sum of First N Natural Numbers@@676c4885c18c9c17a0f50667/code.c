#include <stdio.h>
int main()
{
    int sum,num,i;
    scanf("%d",&num);
    sum=0;
    for(i=0;i<=num;i++)
    {
        sum+=i;
    }
    printf("%d",sum);\
    return 0;
}
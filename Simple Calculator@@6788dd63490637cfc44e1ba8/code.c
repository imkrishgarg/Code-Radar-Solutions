#include <stdio.h>
int num()
{
    int num1,num2,sum,product,diff,multi;
    char opt;
    sum=num1+num2;
    product=num1*num2;
    diff=num1-num2;
    div=num1/num2;
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%c",&opt);
    if(opt=='+')
    {
        printf("%d",sum);
    }
    else if(opt=='-')
    {
        printf("%d",diff);
    }
    else if(opt=='*')
    {
        printf("%d",multi);
    }
    else if(opt=='/')
    {
        printf("%d",div);
    }
    else{
        printf("error");
    }
    return 0;
}
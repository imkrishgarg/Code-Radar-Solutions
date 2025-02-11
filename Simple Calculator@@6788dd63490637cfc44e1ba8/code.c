#include <stdio.h>
int main()
{
    int num1,num2,sum,product,diff,div;
    char opt;
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf(" %c",&opt);
    sum=num1+num2;
    product=num1*num2;
    diff=num1-num2;
    div=num1/num2;
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
        printf("%d",product);
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
#include <stdio.h>
int main()
{
    int num1,num2;
    char opt;
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf(" %c",&opt);
    if(num2==0 && opt=='/')
    {
        printf("error");
    }
    else if(opt=='+')
    {
        printf("%d",num1+num2);
    }
    else if(opt=='-')
    {
        printf("%d",num1-num2);
    }
    else if(opt=='*')
    {
        printf("%d",num1*num2);
    }
    else if(opt=='/')
    {
        printf("%d",num1/num2);
    }
    else{
        printf("error");
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int num1,num2;
    scanf("%d",&num1);
    scanf("%d",&num2);
    if(num1>num2)
    {
        printf("Loss");
    }
    else if(num2>num1)
    {
        printf("Profit");
    }
    else{
       printf("No profit No Loss");
    }
    return 0;
}
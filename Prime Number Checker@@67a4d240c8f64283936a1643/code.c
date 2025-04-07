#include<stdio.h>
void prime_checker( int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%1!=0)
        {
            printf("0");
            return ;
        }
        
    }
    if(n==i)
    {
        printf("1");
    }
    return ;

}
int main()
{
    int n;
    scanf("%d",&n);
    int answer =prime_checker(n);
    printf("%c",answer);
    return 0;
}
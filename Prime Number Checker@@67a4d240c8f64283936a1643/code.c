#include<stdio.h>
void prime_checker( int n)
{
    int i,n;
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
    int a;
    scanf("%d",&a);
    prime_checker(a);
    return 0;
}
#include<stdio.h>
int main()
{
    int n,k,i;
    scanf("%d",&n);
    int arr[n];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    if(k<=n && k>0)
    {
            for(i=(n+1)-k;i<=n;i++)
    {
        printf("%d\n",arr[i]);
    }
    for(i=1;i<(n+1)-k;i++)
    {
        printf("%d\n",arr[i]);
    }
    }
    else if(k==0)
    {
        for(i=1;i<=n;i++)
        {
            printf("%d\n",arr[i]);
        }
    }

    return 0;
}
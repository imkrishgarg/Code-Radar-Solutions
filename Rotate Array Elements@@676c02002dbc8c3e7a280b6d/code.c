#include <stdio.h>
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
    if(k>1 && k<n)
    {
        printf("%d\n",arr[(n+1)-k]);
        for(i=(n+1)-k;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    for(i=1;i<(n+1)-k;i++)
    {
        printf("%d",a[i]);
    }
    }
    return 0;

    
    

}
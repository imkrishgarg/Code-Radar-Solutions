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
        for(i=1;i<n-k;i++)
    {
        printf("%d\n",arr[i]);
    }
    }
    return 0;

    
    

}
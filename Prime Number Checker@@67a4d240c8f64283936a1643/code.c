int isPrime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("0");
            break;
        }
    }
    if(i==n)
    {
        printf("1");
    }
    return 0;

}






















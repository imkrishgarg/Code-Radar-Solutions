#include <stdio.h>
int main()
{
    char alphabet;
    scanf("%c",&alphabet);
    if (isUpper(alphabet))
    {
        printf("Uppercase");
    }
    else if(isLower(alphabet))
    {
        printf("Lowercase");
    }
    else
    {
        printf("Not an Alphabet");
    }
    return 0;
}
#include <stdio.h>

int main()
{
    long long int i, n, fact = 1;
    
    printf("enter any number: ");
    scanf("%lld", &n);
    
    for (i =1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("the factorial of %lld is %lld", n, fact);
    return 0;
}
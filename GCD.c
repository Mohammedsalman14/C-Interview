#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the number: ");
    scanf("%d %d", &a, &b);
    int gcd;
    for (int i = 1; i <= a/2  && i <= b/2 ; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd=i;
        }
    }
    printf("%d",gcd);
}
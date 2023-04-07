#include <stdio.h>
int findgcd(int, int);
int main()
{
    int a, b;
    printf("Enter the number: ");
    scanf("%d %d", &a, &b);
    int gcd = findgcd(a, b);
    printf("GCD : %d\n", gcd);
    printf("LCM :%d",a*b/gcd);
}
int findgcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    return findgcd(b % a, a);
}
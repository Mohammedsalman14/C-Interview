#include <stdio.h>
#include <math.h>
int main()
{
    long n, rem, dec = 0;
    printf("Enter the number:");
    scanf("%ld", &n);
    int i;
    i = 0;
    while (n > 0)
    {
        rem = n % 10;
        dec = dec + rem * pow(2, i);
        i++;
        n = n / 10;
        /* code */
    }
    printf("%ld", dec);
}
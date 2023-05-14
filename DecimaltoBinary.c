#include <stdio.h>
int main()
{
    int n, bin[32];
    printf("Enter the decimal number:");
    scanf("%d", &n);
    int i = 0;

    while (n > 0)
    {
        bin[i] = n % 2;
        i++;
        n = n / 2;
        /* code */
    }
    // printf("%d", i);

    for (int j = i; j >=0; j--)
    {
        printf("%d\t", bin[j]);
    }
}
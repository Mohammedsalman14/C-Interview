#include <stdio.h>

int main()
{
    int n, sum = 0, i;
    printf("Enter the number:");
    scanf("%d", &n);
    int temp = n;

    for (i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == temp)
    {
        printf("Perfect number");
    }
    else
    {
        printf("Not a perfect number");
    }
}
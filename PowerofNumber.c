#include <stdio.h>
int main()
{
    int base, power;
    printf("Enter the Base ans Power:");
    scanf("%d %d", &base, &power);
    int temp = 1;
    while (power > 0)
    {
        /* code */
        temp = temp * base;
        power--;
    }
    printf("\n%d", temp);
}
#include <stdio.h>
#include <math.h>
int main()
{
    int num, digits=0, sum = 0;
    int temp = num;
    printf("Enter the number: ");
    scanf("%d", &num);
    for (int i = num; i > 0; i = i / 10)
    {
        digits++;
    }
    while (num > 0)
    {

        sum = sum + pow(num % 10, digits);
        num = num / 10;
        /* code */
    }
    if (num == temp)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not a Armstrong Number");
    }
    if(printf("Hello World"));
}
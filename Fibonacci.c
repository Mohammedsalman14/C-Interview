#include <stdio.h>
int main()
{
    int n = 5;
    int a = 0, b = 1, c;
    n = n - 2;
    printf("%d %d ", a, b);
    while (n > 0)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
        n--;

        /* code */
    }

    // for loop

    for (int i = n; i > 0; i--)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
   
}
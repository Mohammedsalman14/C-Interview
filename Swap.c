#include <stdio.h>

void usingthridvariable()
{
    int a = 1;
    int b = 2;
    int c;
    c = a;
    a = b;
    b = c;
    printf("%d\t%d", a, b);
}
void withusingthridvariable()
{
    int a = 1;
    int b = 2;

    a = a + b; // 3
    b = a - b; // 1
    a = a - b; // 2

    printf("%d\t%d", a, b);
}
int main()
{
    usingthridvariable();
    withusingthridvariable();
}
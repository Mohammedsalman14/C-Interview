#include <stdio.h>
int fact(int n)
{
    int i;
    int f = 1;
    for (i = n; i >0; i--)
    {
        f = f * i;
    }
    return f;
}
int main()
{
    int n = 145;
    int SumofFacts=0,temp;
    temp=n;
//     printf("%d", fact(n));
    while (n>0)
    {
        /* code */
        SumofFacts=SumofFacts+fact(n%10);
        n=n/10;
    }
    if(temp==SumofFacts){
        printf("Strong Number");
    }else{
        printf("Not a Strong Number");
    }
    
}

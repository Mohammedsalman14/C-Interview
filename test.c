#include <stdio.h>
int fact(int f)
{
    int temp = 1;
    int i;
    for (i = f; i > 0; i--)
    {
        temp = temp * i;
    }
    return temp;
}
int gcd(int a,int b){
    int i,gcd;
    for(i=1;i<=a/2&&i<=b/2;i++){
        if(a%i==0&&b%i==0){
            gcd=i;
        }
    }
    return gcd;
}
int lcm(int a,int b){
    
    int mul;
    mul=a>b?a:b;
    int step=mul;
    while(1){
        if(mul%a==0&&mul%b==0){
            break;
        }
        mul=mul+step;
    }
    return mul;
}
int main()
{
    int temp,n=5;
    int sumoffacts=0;
    temp=n;
    while (n>0)
    {
        sumoffacts=sumoffacts+fact(n%10);
        n=n/10;
        /* code */
    }
    if(sumoffacts==temp){
        printf("Strongest number");
    }else{
        printf("not Strongest number");
    }
    printf("\n%d",gcd(12,18));
    printf("\n%d",lcm(8,10));

}
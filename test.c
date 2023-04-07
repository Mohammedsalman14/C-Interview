#include<stdio.h>
int main(){
    int a,b,step;
    printf("Enter the number: ");
    scanf("%d %d",&a,&b);
    int mul=a>b?a:b;
    
    step=mul;
    while (1)
    {   
        if(mul%a==0&&mul%b==0){
            break;
        }
        mul=mul+step;
        /* code */
    }
    printf("LCM is %d",mul);
}
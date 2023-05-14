#include<stdio.h>
int main(){
    int base,power;
    int temp=1;
    printf("Enter the value:");
    scanf("%d %d",&base,&power);
    while (power>0){
        temp=temp*base;
        power--;
    }

    printf("\n%d",temp);
}
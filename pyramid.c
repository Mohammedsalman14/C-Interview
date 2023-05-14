#include<stdio.h>
int main(){
    int n,row,col;
    printf("Entert the numbers: ");
    scanf("%d",&n);
    for(row=0;row<n;row++){
        for(int space=0;space<n-row;space++){
            printf("  ");
        }
        for(col=0;col<2*row-1;col++){
            printf("* ");
        }
        printf("\n");
        
    }
}
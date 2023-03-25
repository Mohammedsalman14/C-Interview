#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year:");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        if(year %100==0){
            if(year %400==0){
                printf("Leap year");
            }else{
                printf("Not a Lear year");
            }
        }
        printf("Leap year");
    }
    else
    {
        printf("Not a Leap year");
    }
}
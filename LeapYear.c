#include<stdio.h>

int main(){
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);
    int leap = 0;
    if(year%4==0){
    	leap = 1;
        if(year%100==0 && year%400!=0)
            leap = 0;
    }
    if(leap)
        printf("The %d is a leap year!!",year);
    else
        printf("The %d is not a leap year",year);
    return 0;
}

#include<stdio.h>

int main(int argc, char *argv[]){
    int year = atoi(argv[1]);
    int leap = 1;
    if(year%4==0){
        if(year%100==0 && year%400!=0)
            leap = 0;
    }
    else
        leap = 0;
    if(leap)
        printf("The %d is a leap year!!",year);
    else
        printf("The %d is not a leap year",year);
    return 0;
}

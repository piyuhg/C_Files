#include<stdio.h>

int main(int argc, char *argv[]){
    int n1 = atoi(argv[1]);
    int n2 = atoi(argv[2]);
    int gcd = 1;
    int min = 1;
    if(n1>=n2)
        min = n2;
    else
        min = n1;
    if(n1%n2==0)
        gcd = n2;
    else if(n2%n1==0)
        gcd = n1;
    else{
        int i;
        for(i=2;i<=min/2;i++)
            if(n1%i==0 && n2%i==0)
                gcd = i;
    }
    int lcm = (n1*n2)/gcd;
    printf("The GCD of %d and %d is : %d",n1,n2,gcd);
    printf("\nThe LCM of %d and %d is : %d",n1,n2,lcm);
    return 0;
}

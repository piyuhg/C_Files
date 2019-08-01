#include<stdio.h>

int main(int argc, char *argv[]){
	int n = atoi(argv[1]);
	unsigned int fact = 1;	//use "unsigned long long" for avoiding the out of range error, as factorial value can be very large 
	int i;
	for(i = 2;i<=n;i++)
	    fact = fact*i;

    printf("The factorial of %d is: %ld",n,fact);	//notice "%ld" --> long integer
}

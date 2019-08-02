#include<stdio.h>
#include<math.h>

int main(){
	unsigned long long int bin = 0,i;
	int dec = 0, rem = 0,j=0;
	printf("Enter the number into binary: ");
	scanf("%ld",&bin);
	for(i=bin;i>0;i/=10){
		rem = i%10;		
		dec = dec + rem*pow(2,j++);
	}
	printf("The decimal equivalent of %ld is: %d",bin,dec);
	return 0;
}


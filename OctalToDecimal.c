#include<stdio.h>
#include<math.h>

int main(){
	unsigned long long int oct = 0,i;
	int dec = 0, rem = 0,j=0;
	printf("Enter the number into octal: ");
	scanf("%ld",&oct);
	for(i=oct;i>0;i/=10){
		rem = i%10;		
		dec = dec + rem*pow(8,j++);
	}
	printf("The decimal equivalent of %ld is: %d",oct,dec);
	return 0;
}

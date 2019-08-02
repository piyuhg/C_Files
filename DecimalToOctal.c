#include<stdio.h>
#include<math.h>

int main(){
	int dec,rem=0,i,j=0;
	unsigned long int oct = 0;
	printf("Enter the value in decimal: ");
	scanf("%d",&dec);
	for(i = dec;i>0;i/=8){
		rem = i%8;
		oct = oct + rem*pow(10,j++);
	}
	printf("\nThe Octal equivalent of %d is: %ld",dec,oct);
	return 0;	
}

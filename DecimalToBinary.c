#include<stdio.h>
#include<math.h>

int main(){
	int dec,rem = 0,i,j=0;
	unsigned long long int bin = 0;
	printf("Enter the value in decimal: ");
	scanf("%d",&dec);
	for(i = dec;i>0;i/=2){
		rem = i%2;
		bin = bin + rem*pow(10,j++);
	}
	printf("\nThe binary equivalent of %d is: %ld",dec,bin);
	return 0;
}

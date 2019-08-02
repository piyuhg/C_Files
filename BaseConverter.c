#include<stdio.h>
#include<math.h>

int main(){
	int rem = 0,j=0;
	int inBase, outBase;
	printf("Enter the input base: ");
	scanf("%d",&inBase);
	printf("Enter the output base: ");
	scanf("%d",&outBase);
	unsigned long long int input = 0,output = 0,i;
	printf("Enter the value to be converted: ");
	scanf("%ld",&input);
	if(inBase==10 || outBase==10){
		for(i = input;i>0;i/=outBase){
			rem = i%outBase;
			output = output + rem*pow(inBase,j++);
		}
	}
	else if(inBase!=10){
		j=0;
		unsigned long long int inter = 0;
		for(i = input;i>0;i/=10){
			rem = i%10;
			inter = inter + rem*pow(inBase,j++);
		}
		printf("\nThe value of %ld in base 10 is: %ld",input,inter);
		j=0;
		for(i = inter;i>0;i/=outBase){
			rem = i%outBase;
			output = output + rem*pow(10,j++);
		}		
	}
	printf("\nThe value of %ld in %d base is: %ld",input,outBase,output);
	return 0;
}

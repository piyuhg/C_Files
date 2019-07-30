#include<stdio.h>

int main(){
	int num, i,fact=1;
	printf("Enter the number: ");
	scanf("%d",&num);
	while(num<0){
		printf("\nEnter valid number (greater than equal to 0): ");
		scanf("%d",&num);
	}
	for(i=1;i<=num;i++)
		fact *= i;
	printf("The factorial of %d is %d",num,fact);
}

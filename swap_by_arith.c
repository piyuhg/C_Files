#include<stdio.h>

int main(){
	int a,b;
	printf("Enter the two numbers: ");
	scanf("%d %d",&a,&b);
	printf("The values of a is %d and b is %d",a,b);
	a = a+b;
	b = a-b;
	a = a-b;
	printf("\nThe values after swapping are: \n");
	printf("The values of a is %d and b is %d",a,b);
	return 0;
}

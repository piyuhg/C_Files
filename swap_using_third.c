#include<stdio.h>

int main(){
	int a,b;
	printf("Enter the two numbers: ");
	scanf("%d %d",&a,&b);
	printf("The values of a is %d and b is %d",a,b);
	int c = a;
	a = b;
	b = c;
	printf("\nThe values after swapping are: \n");
	printf("The values of a is %d and b is %d",a,b);
	return 0;
}

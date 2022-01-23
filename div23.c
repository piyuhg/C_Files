#include<stdio.h>
int main()
{
	printf("Enter a number: ");
	int num;
	scanf("%d",&num);
	if(num%2==0 && num%3==0)
		printf("The number is divisible by both 2 and 3\n");
	else if(num%2==0)
		printf("The number is only divisible by 2\n");
	else if(num%3==0)
		printf("The number is only divisible by 3\n");
	else
		printf("The number is not divisible by both 2 and 3\n");
	return 0;
}

#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	int rem=0, sum = 0;
	while(num>0)
	{
		rem = num%10;
		sum = sum + rem;
		num = num/10;
	}
	printf("The sum of digits is: %d \n",sum);
	return 0;
}

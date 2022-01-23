#include<stdio.h>
int main()
{
	int num;
	printf("Enter the numbers to be in fibonacci sequnece: ");
	scanf("%d",&num);
	int a = 0, b = 1, c;
	printf(" %d %d",a,b);
	while(num-2 > 0)
	{
		c = a+b;
		a = b;
		b = c;
		num--;
		printf(" %d",c);
	}
	printf("\n");
	return 0;
}

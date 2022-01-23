#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the number A: ");
	scanf("%d",&a);
	printf("Enter the number B: ");
	scanf("%d",&b);
	printf("Enter the number C: ");
	scanf("%d",&c);
	int largest = 0;
	if(a >= b && a>= c)
		largest = a;
	else if(b >= a && b >= c)
		largest = b;
	else
		largest = c;
	printf("The largest Number among the three numbers is %d\n",largest);
	return 0;
}


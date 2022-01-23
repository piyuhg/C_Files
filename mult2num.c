#include<stdio.h>
int mult(int a, int b)
{	
	if(a==0 || b==0)
		return 0;
	if(b<=1)
		return a;
	return a + mult(a,--b);
}
int main()
{
	int a, b;
	printf("Enter the number A: ");
	scanf("%d",&a);
	printf("Enter the number B: ");
	scanf("%d",&b);
	printf("%d\n",mult(a,b));
	return 0;
}

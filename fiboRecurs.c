#include<stdio.h>
void fibo(int n,int a, int b)
{
	if(n+2<=0)
		return;
	printf(" %d",a);
	fibo(n-1,b,a+b);
	return;
}
int main()
{
//	printf(" 0 1");
	fibo(5,0,1);
	printf("\n");
	return 0;
}

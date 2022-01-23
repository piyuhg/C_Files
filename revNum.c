#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	int rem=0, mun=0;
	while(num>0)
	{
		rem = num%10;
		mun = mun*10 + rem;
		num = num/10;
	}
	printf("Reversed number is : %d\n",mun);
	return 0;
}

#include<stdio.h>
int main()
{
	char p = 'a';

	printf("Address of p is: %ld\n",&p);
	printf("Value of p is: %c",*(&p));
	printf("\nValue of p is: %c\n",p);
	return 0;
}

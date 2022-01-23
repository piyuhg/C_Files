#include<stdio.h>

int main() {
	int i,x=5;
	i = x++ + x++;
	printf(" %d, %d \n",x,i);
	x = 5;
	i = ++x + ++x;
	printf("%d, %d\n",x,i);	
	x = 5;
	i = x++ + x++ + x++;
	printf("%d, %d\n",x,i);
	return 0;
}

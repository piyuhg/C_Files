#include<stdio.h>
#include<string.h>
int main( int argc, char *argv[])
{
	int a[argc];
	int sum = 0;
	for(int i = 0;i<argc;i++){
		a[i] = atoi(argv[i]);
		sum = sum + a[i];
	}
	printf("Sum of args is: %d\n",sum);
	return 0;
}

#include<stdio.h>
int main()
{
	int arr[] = {1,2,3,4,5,6,7};
	int size = 7;
	int rra[size];
	for(int i = 0; i<= size-1;i++)
		rra[i] = arr[size-1-i];
	for(int i = 0;i <= size-1;i++)
		printf(" %d",rra[i]);
	printf("\n");
	return 0;
}

#include<stdio.h>
int main()
{
	int arr[] = {1,2,0,2,3,5,6,7,8,0};
	int max = -1, min = 100;
	int size = 10;
	for(int i = 0;i<=size-1;i++)
	{
		if(max <= arr[i])
			max = arr[i];
		if(min >= arr[i])
			min = arr[i];
	}
	printf("Max element is: %d\n",max);
	printf("Min element is: %d\n",min);
	return 0;
}

#include<stdio.h>
int main()
{
	int arr[100] = {1,210,215,10,2,42,6,7,9};
	int ptr = 8;
	int ptru;
	int val;
	for(int i = 0;i<=ptr;i++)
		printf(" %d",arr[i]);
	printf("\nCurrent Pointer at: %d\n",ptr);
	printf("Enter the index for insertion: ");
	scanf("%d",&ptru);
	printf("Enter the value to be inserted: ");
	scanf("%d",&val);
/*	if(ptru==0)
	{
		for(int i = ptr;i>=0;i--)
			arr[i+1] = arr[i];
		arr[0] = val;
		ptr = ptr+1;
	}
	else */
	if(ptru==(ptr+1))
	{
		arr[ptru] = val;
		ptr = ptru;
	}
	else if (ptru<=ptr)
	{
		for(int i = ptr;i>=ptru;i--)
			arr[i+1] = arr[i];
		arr[ptru] = val;
		ptr = ptr+1;
	}
	for(int i = 0;i<=ptr;i++)
		printf(" %d",arr[i]);
	printf("\nCurrent Pointer at: %d\n",ptr);
	return 0;
}

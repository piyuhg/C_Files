#include<stdio.h>
int main()
{
	int arr[100] = {1,2,3,4,3,2,3};
	int ptr = 6;
	int ptru;
	for(int i = 0;i<=ptr;i++){
		printf(" %d",arr[i]);
	}
	printf("\nPointer currently at: %d\n",ptr);
	printf("Enter the position for deletion: ");
	scanf("%d",&ptru);
	if(ptru==0)
	{
		for(int i = 0;i<ptr;i++)
			arr[i] = arr[i+1];
		ptr = ptr -1;
	}
	else if(ptru==ptr)
	{
		arr[ptr] = -1;
		ptr = ptr-1;
	}
	else if(ptru<ptr && ptru>0)
	{
		for(int i = ptru;i<ptr;i++)
			arr[i] = arr[i+1];
		ptr = ptr-1;
	}	
	for(int i = 0;i<=ptr;i++){
		printf(" %d",arr[i]);
	}
	printf("\nPointer currently at: %d\n",ptr);
	return 0;
}


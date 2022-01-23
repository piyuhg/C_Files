#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,*ptr,*p;
	printf("Enter the size of integer array: ");
	scanf("%d",&n);
	ptr = (int *)malloc(n*sizeof(int));
	p = ptr;
	//insertion
	for(int i = 0; i<=n-1;i++){
		printf("Enter the value for location %d: ",i);
		scanf("%d",ptr+i);
	}
	for(int i = 0; i<=n-1;i++){
		printf(" %d",*(ptr+i));
		printf(" %ld",ptr+i);
	}
	printf("\n");
	//reallocate
	printf("Enter the new size or integer array: ");
	scanf("%d",&n);
	ptr = (int *)realloc(ptr,n*sizeof(int));
	if(ptr==NULL)
		printf("Allocation Failed!");
	for(int i = 0; i<=n-1;i++)
		printf(" %d",*(ptr+i));
	printf("\n");
	//deallocation
	free(ptr);
	free(p);
	printf("Deallocation");
	for(int i = 0; i<=n-1;i++)
		printf(" %d",*(ptr+i));
	printf("\n");
	return 0;
}

#include<stdio.h>

int main(){
	int n = 10,i;
	int arr[10] = {};
	for(i = 0;i<n;i++){
		printf("Enter the %dth element: ",i+1);
		scanf("%d",&arr[i]);
	}	
	int greatest = 0;
	for(i=0;i<n;i++)
	    if(arr[i]>=greatest)
	        greatest = arr[i];
	printf("Greatest element: %d",greatest);
	return 0;
}

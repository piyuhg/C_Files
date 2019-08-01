#include<stdio.h>

int main(int argc, char *argv[]){
	int a[100] = {};
	int j,k=0,l;
	for(j=1;j<argc;j++){
	    a[k] = atoi(argv[j]);
	    k++;
	}
	int greatest = 0;
	for(l = 0;l<k;l++){
	    if(a[l]>=greatest)
	        greatest = a[l];
	}
	printf("Greatest element: %d",greatest);
	return 0;
}

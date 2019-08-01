#include<stdio.h>

int main(int argc, char *argv[]){
    if(argc!=2)             //optional condition
        return 0;           //optional condition
    int n = atoi(argv[1]);  //remeber atoi
    int first = 0, second = 1;
	int i;
	printf("%d ",first);
	for(i = 1;i<=n;i++){
		printf("%d ",second);
		int next = first + second;
		first = second;
		second = next;
	}
	return 0;
}

#include<stdio.h>
int main(){
	int x = 5;
	int i = x++ + x++ + x++;
	int y = 5;
	int j = ++y + ++y + ++y;
	int z = 5;
	int k = ++z + z++;
	printf(" %d %d\n",x,i);
	printf("%d ,%d \n",y,j);
	printf("%d ,%d \n",z,k);
	return 0;
}

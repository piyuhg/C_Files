#include<stdio.h>
union mystruct{
	char name[28];
	int age;
	float marks;
};
int main(){
	union mystruct struct1;
	printf("char %d\n",sizeof(char));
	printf("int %d\n",sizeof(int));
	printf("float %d\n",sizeof(float));
	printf("%d\n",sizeof(struct1));
	printf("%d\n",sizeof(union mystruct));
	return 0;
}

#include<stdio.h>
//#include<math.h>

int main(){
	double radius, pi = 3.14159;
	printf("Enter the Radius of the Circle: ");
	scanf("%lf",&radius);
	//double area = M_PI*radius*radius;
	double area = pi*radius*radius;
	printf("The Area of circle is: %lf",area);
}

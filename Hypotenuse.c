#include<stdio.h>
#include<math.h>

int main(){
	double base, perpendicular;
	printf("Enter the length of the Base of triangle: ");
	scanf("%lf",&base);
	printf("Enter the length of the Perpendicular of triangle: ");
	scanf("%lf",&perpendicular);
	double sq = pow(base,2) + pow(perpendicular,2);
	double hypo = sqrt(sq);
	printf("The hypotenuse of triangle is: %lf",hypo);
}

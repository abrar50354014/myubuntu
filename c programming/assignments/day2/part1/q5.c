#include<stdio.h>
int main() {
	float radius, area,Circumference_of_Circle;
	printf("Enter the radius of Circle : \n");
	scanf("%f", &radius);
	area = 3.14 * radius * radius;
	Circumference_of_Circle = 2 * 3.14 * radius;
	printf("Area of Circle : %f\n", area);
	printf("Circumference of Circle : %f\n", Circumference_of_Circle);
}

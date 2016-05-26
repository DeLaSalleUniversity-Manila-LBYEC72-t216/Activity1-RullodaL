#include <stdio.h>
#include <stdlib.h>

int main() {
	float base,height,area;
	printf("Input Triangle's base: ");
	scanf("%f",&base);
	printf("Input height: ");
	scanf("%f",&height);
	area=0.5*base*height;
	printf("\nTriangle's Area is: %.2f",area);
	return 0;
}

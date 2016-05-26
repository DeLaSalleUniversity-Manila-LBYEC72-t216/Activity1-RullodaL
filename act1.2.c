#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int year, age;
	printf("Input birth year: ");
	scanf("%d",&year);
	age=2016-year;
	printf("Approximate age: %d",age);
	return 0;
}

#include <stdio.h>

int main() {
	float testfloat = 1.5;
	int testint = 3;
	char testchar = 'A';

	printf("Incorrectly printed float: %d\n", testfloat);
	printf("Incorrectly printed int: %f\n", testint);
	printf("Incorrectly printed char: %d\n", testchar);

	return (0);
}
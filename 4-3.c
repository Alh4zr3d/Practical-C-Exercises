#include <stdio.h>

int main() {
	int width = 3;
	int length = 5;
	float f_width = 6.8;
	float f_length = 2.3;

	int perimeter = width * 2 + length * 2;
	float f_perimeter = f_width * 2 + f_length * 2;
	int area = width * length;
	float f_area = f_width * f_length;

	printf("Integer Perimeter: %d\n", perimeter);
	printf("Integer Area: %d\n", area);
	printf("Float Perimeter: %.2f\n", f_perimeter);
	printf("Float Area: %.2f\n", f_area);

	return (0);
}
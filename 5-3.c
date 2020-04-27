#include <stdio.h>

int main() {
	char line[100];
	float length;
	float width;
	float perimeter;

	printf("Enter the length of the rectangle: ");
	fgets(line, sizeof(line), stdin);
	sscanf_s(line, "%f", &length);

	printf("Enter the width of the rectangle: ");
	fgets(line, sizeof(line), stdin);
	sscanf_s(line, "%f", &width);

	perimeter = 2 * (length + width);

	printf("The perimeter of this rectangle is: %.2f", perimeter);

	return (0);
}
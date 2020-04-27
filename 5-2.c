#include <stdio.h>
#include <math.h>
#define PI 4.0*atan(1.0)

int main() {

	char line[100];
	float radius;
	float volume;

	printf("Give the radius of a sphere: ");
	fgets(line, sizeof(line), stdin);
	sscanf_s(line, "%f", &radius);

	volume = (4.0 / 3.0) * PI * pow(radius, 3);

	printf("The volume of this sphere is: %.3f", volume);

	return (0);
}
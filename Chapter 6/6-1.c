#include <stdio.h>
#include <math.h>

int main() {
	char line[100];
	double x_dist;
	double y_dist;
	double actual_dist;

	printf("Please enter the horizontal distance: ");
	fgets(line, sizeof(line), stdin);
	sscanf_s(line, "%lf", &x_dist);

	printf("Please enter the vertical distance: ");
	fgets(line, sizeof(line), stdin);
	sscanf_s(line, "%lf", &y_dist);

	actual_dist = sqrt(pow(x_dist, 2) + pow(y_dist, 2));

	printf("The actual distance between these two points is: %lf", actual_dist);
	
	return (0);
}
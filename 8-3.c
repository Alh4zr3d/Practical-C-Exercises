#include <stdio.h>
#include <string.h>
/*
#include <stdlib.h>
*/

int main() {
	char line[100];
	float num;
	float total = 0;
	int count = 0;
	float average;

	/*
	printf("Please enter the number of numbers to be averaged: ");
	fgets(line, sizeof(line), stdin);
	sscanf_s(line, "%d", &num);

	int *nums = malloc(num * sizeof(*nums));
	if (L == NULL) {
		printf("ERROR\n");
		return (0)
	}
	*/

	while (1) {
		printf("Enter a number (\"end\" to quit): ");
		fgets(line, sizeof(line), stdin);
		if (_strcmpi(line, "end\n") == 0)
			break;
		sscanf_s(line, "%f", &num);

		total += num;
		count++;
	}

	average = total / count;

	printf("The average of these numbers is: %f", average);

	return (0);
}
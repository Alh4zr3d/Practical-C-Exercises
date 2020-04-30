#include <stdio.h>
#include <stdlib.h>

/* Function accepts an array and a number of elements in that array and produces
the number with the highest absolute value in the array. */

int maxAbs(int array[], unsigned int count) {
	unsigned int max = 0;

	for (unsigned int index = 0; index < count; index++) {
		if (abs(array[index]) > max)
			max = array[index];
	}

	return (max);
}

int main() {
	static char line[100];
	unsigned int count;

	printf("Please enter the number of numbers to be entered: ");
	fgets(line, sizeof(line), stdin);

	if (line[0] == '-') {
		printf("ERROR: Negative number not allowed in this field.\n");
		return (0);
	}

	sscanf_s(line, "%d", &count);

	if (count == NULL) {
		printf("ERROR: Must enter a positive integer.\n");
		return (0);
	}

	int *array = malloc(count * sizeof(*array));
	if (array == NULL) {
		printf("ERROR: Array is null.\n");
		return (0);
	}

	for (unsigned int index = 0; index < count; index++) {
		printf("Enter an integer: ");
		fgets(line, sizeof(line), stdin);
		sscanf_s(line, "%d", &array[index]);
	}

	printf("The largest number in this array (by absolute value) is: %d", maxAbs(array, count));

	return (0);
}
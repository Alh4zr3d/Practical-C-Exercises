/* Simple program using pointers to initialize all elements in an array to zero. */

#include <stdio.h>
#include <stdlib.h>

int main() {
	char line[100];
	unsigned int num;

	printf("Enter the (positive integer) size of the array to initialize: ");
	fgets(line, sizeof(line), stdin);
	sscanf_s(line, "%lu", &num);

	/* Initialize array of size determined at runtime */

	int* arr = malloc(num * sizeof(*arr));

	if (arr == NULL) {
		printf("ERROR: Array cannot be null.");
		return (0);
	}

	for (int i = 0; i < (int)num; i++)
		*(arr + i) = 0;

	for (int i = 0; i < (int)num; i++)
		printf("%d\n", *(arr + i));

	return (0);
}
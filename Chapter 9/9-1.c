#include <stdio.h>

int main() {
	char line[100];
	static int spaces = 0;

	printf("Enter a sentence (100 characters max): \n");
	fgets(line, sizeof(line), stdin);

	/* Computes the number of words in the string, defined as any number of nonspace characters deliniated by a space. */

	for (int index = 0; line[index] != '\0'; index++) {
		if (line[index] == ' ')
			spaces++;
	}

	printf("There are %d words in this sentence.", spaces + 1);

	return (0);
}
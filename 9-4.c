#include <stdio.h>
#include <string.h>

/* Simple hashing function to simply add the ascii character values for each character of the string passed to it and return the integer result. */
int simpleHash(char line[]) {
	unsigned int hash = 0;

	for (int index = 0; line[index] != '\0'; index++)
		hash += line[index];

	return (hash);
}

int main() {
	static char line[100];

	printf("Please enter a string to be hashed (100 characters max): ");
	fgets(line, sizeof(line), stdin);
	/* Strip off the newline from the fgets() buffer */
	line[strcspn(line, "\r\n")] = '\0';

	printf("Hash: %d", simpleHash(line));

	return (0);
}
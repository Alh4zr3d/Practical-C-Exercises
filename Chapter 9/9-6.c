#include <stdio.h>
#include <string.h>

/* Simple function to switch all hyphens in a string to underscores.
Note that I had to learn how to pass and return strings; must be 
passed as pointers and return type must be a pointer. */

char* hyphenToUnderscore(char *str) {
	for (int index = 0; str[index] != '\0'; index++) {
		if (str[index] == '-')
			str[index] = '_';
	}
	return (str);
}

int main() {
	static char line[100];

	printf("Enter a string (100 characters max):\n");
	fgets(line, sizeof(line), stdin);
	line[strcspn(line, "\r\n")] = '\0';

	printf("Transformed string:\n%s\n", hyphenToUnderscore(line));

	return (0);
}
/* 
Function to return pointer to first nonwhite character in string.
Main program simply tests its function.
*/

#include <stdio.h>

char* find_non_white(char* str) {
	int i = 0;

	/* Test for white space; if found, advance to next index in string */
	while (*(str + i) == ' ' || *(str + i) == '\t' || *(str + i) == '\n' || *(str + i) == '\r' || *(str + i) == '\f' || *(str + i) == '\v') {
		i++;
	/* Check if we have hit the end of the string; if end of string is hit with no white space, return NULL. */
		if (*(str + i) == '\0')
			return (NULL);
	}

	return (str + i);
}

int main() {
	char line[100];
	char* find_non_white(char[]);

	printf("Enter a string (100 characters max): ");
	fgets(line, sizeof(line), stdin);

	printf("First non-whitespace character in this string: %c", *find_non_white(line));

	return (0);
}
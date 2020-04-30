#include <stdio.h>
#include <string.h>

/* Function iterates through the strings comparing each letter until it
encounters a null byte in the second string. If the letters ever do not
match or if the end of the first string is reached (meaning string1 is 
shorter than string2), it returns false. */

int begins(char string1[], char string2[]) {
	static int beginswith = 1;
	for (int index = 0; string2[index] != '\0'; index++) {
		if (string1[index] != string2[index] || string1[index] == '\0')
			beginswith = 0;
	}
	return beginswith;
}

int main() {
	char line1[100];
	char line2[100];

	printf("Enter a string:\n");
	fgets(line1, sizeof(line1), stdin);
	/* Strip off the newline at the end of the fgets buffer */
	line1[strcspn(line1, "\r\n")] = '\0';

	printf("Enter a second string:\n");
	fgets(line2, sizeof(line2), stdin);
	/* Strip off the newline at the end of the fgets buffer */
	line2[strcspn(line2, "\r\n")] = '\0';

	if (begins(line1, line2) == 1)
		printf("The first string begins with the second string.");
	else
		printf("The first string does not begin with the second string.");

	return (0);
}
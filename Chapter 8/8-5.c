#include <stdio.h>
#include <string.h>

int main() {
	int ch;
	char chr;

	printf("Enter a single character of the alphabet: ");
	
	if ((ch = getchar()) != EOF) {
		chr = ch;
		if (chr < 65 || chr > 122) {
			printf("Error: Not a character of the alphabet.");
		}
		else {
			if ( chr == 'A' || chr == 'E' || chr == 'I' || chr == 'O' || chr == 'U' || chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' || chr == 'u' )
				printf("%c is a vowel.", chr);
			else
				printf("%c is a consonant.", chr);
		}
	}
	return (0);
}
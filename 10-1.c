#include <stdio.h>
#include <string.h>

/* Macro returns TRUE if the param is divisible by 10 and FALSE if not. */
#define DIV10(x) (((x) % (10) == 0) ? ("TRUE") : ("FALSE"))

int main() {
	static char line[100];
	static int num;

	printf("Enter an integer: ");
	fgets(line, sizeof(line), stdin);
	sscanf_s(line, "%d", &num);

	printf("Answer: %s", DIV10(num));

	/*
	if (answer == 0)
		printf("Divisible by 10.\n");
	else
		printf("Not divisible by 10.\n");
*/
	return (0);
}
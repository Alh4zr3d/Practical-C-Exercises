#include <stdio.h>
#include <string.h>

/* Macro returns TRUE if the param is a decimal digit and FALSE if not. */
#define is_digit(x) (((x) <= (9) && (x) >= (0)) ? ("TRUE") : ("FALSE"))

int main() {
	static char line[100];
	static int num;

	printf("Enter an integer: ");
	fgets(line, sizeof(line), stdin);
	sscanf_s(line, "%d", &num);

	if (is_digit(num) == "TRUE")
		printf("Is digit!");
	else
		printf("Is not digit.");

	return (0);
}
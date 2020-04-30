#include <stdio.h>
#include <string.h>

/* Macro returns TRUE if the param is a decimal digit and FALSE if not. */
#define is_digit(x) (((x) <= (57) && (x) >= (48)) ? ("TRUE") : ("FALSE"))
/* Macro returns TRUE if the param is a hex digit and FALSE if not. */
#define is_hex(y) ((is_digit(y) == "TRUE" || ((y) >= (65) && (y) <= (70)) || ((y) >= (97) && (y) <= (102))) ? ("TRUE") : ("FALSE"))

int main() {
	static char line[100];
	static char chr;

	printf("Enter a single character: ");
	chr = getchar();

	if (is_hex(chr) == "TRUE")
		printf("Is hex digit!");
	else
		printf("Is not hex digit.");

	return (0);
}
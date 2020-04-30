#include <stdio.h>
#include <string.h>

/* Macro swaps two integers using bitwise exclusive XOR */
#define SWAP(x,y) ((x) ^= (y) ^= (x) ^= (y))

int main() {
	static char line[100];
	static int num1;
	static int num2;

	printf("Enter the first integer: ");
	fgets(line, sizeof(line), stdin);
	sscanf_s(line, "%d", &num1);

	printf("Enter the second integer: ");
	fgets(line, sizeof(line), stdin);
	sscanf_s(line, "%d", &num2);

	printf("Integer1: %d\n", num1);
	printf("Integer2: %d\n", num2);

	SWAP(num1, num2);

	printf("Integer1: %d\n", num1);
	printf("Integer2: %d\n", num2);

	return (0);
}
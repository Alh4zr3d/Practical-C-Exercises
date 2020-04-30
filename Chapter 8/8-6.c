#include <stdio.h>
#include <stdlib.h>

int main() {
	char line[100];
	int value;
	int numdigits = 0;
	int digits[10];

	printf("Enter an integer: ");
	fgets(line, sizeof(line), stdin);
	sscanf_s(line, "%d", &value);
	
	if (value < 0)
		printf("negative ");

	value = abs(value);

	while (value > 0) {
		int digit = value % 10;
		digits[numdigits] = digit;
		numdigits++;
		value /= 10;
	}

	for (int i = numdigits-1; i >= 0; i--) {
		if (digits[i] == 1)
			printf("one ");
		else if (digits[i] == 2)
			printf("two ");
		else if (digits[i] == 3)
			printf("three ");
		else if (digits[i] == 4)
			printf("four ");
		else if (digits[i] == 5)
			printf("five ");
		else if (digits[i] == 6)
			printf("six ");
		else if (digits[i] == 7)
			printf("seven ");
		else if (digits[i] == 8)
			printf("eight ");
		else if (digits[i] == 9)
			printf("nine ");
		else if (digits[i] == 0)
			printf("zero ");
	}

	return (0);
}
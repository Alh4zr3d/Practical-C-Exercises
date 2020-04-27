#include <stdio.h>
#include <stdbool.h>

int main() {
	char line[100];
	unsigned int num;
	bool prime = true;

	printf("Please enter a positive integer (negative integers will be interpreted as positive): ");
	fgets(line, sizeof(line), stdin);
	sscanf_s(line, "%u", &num);

	if (num == 1 || num == 0) {
		printf("%u cannot be prime or composite, by definition.\n", num);
		return (0);
	}

	for (int i = 2; i < num / 2; i++) {
		if (num % i == 0) {
			prime = false;
			break;
		}
	}

	if (prime == true)
		printf("This number is a prime.\n");
	else
		printf("This number is a composite.\n");

	return (0);
}
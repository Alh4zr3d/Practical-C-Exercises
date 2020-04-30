#include <stdio.h>

int main() {
	char edge[] = "-----+";
	char mid[] = "     |";

	for (int y = 0; y < 33; y++) {
		for (int x = 0; x < 8; x++) {
			if (y == 0 || y % 4 == 0) {
				if (x == 0)
					printf("+");
				printf("%s", edge);
				if (x == 7)
					printf("\n");
			}
			else {
				if (x == 0)
					printf("|");
				printf("%s", mid);
				if (x == 7)
					printf("\n");
			}
		}
	}
		
	return (0);
}
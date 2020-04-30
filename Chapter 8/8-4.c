#include <stdio.h>

int main() {
	char line[100];
	int maxnum;

	printf("Please enter the maximum number for the multiplication table: ");
	fgets(line, sizeof(line), stdin);
	sscanf_s(line, "%d", &maxnum);

	for (int i = 1; i <= maxnum; i++) {
		for (int j = 1; j <= maxnum; j++) {
			printf("%d ", i * j);
			if (j == maxnum)
				printf("\n");
		}
	}

	return (0);
}
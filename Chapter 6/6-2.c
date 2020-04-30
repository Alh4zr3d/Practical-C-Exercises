#include <stdio.h>

int main() {
	char line[100];
	float num_grade;
	char letter_grade;

	printf("Please enter your numeric grade: ");
	fgets(line, sizeof(line), stdin);
	sscanf_s(line, "%f", &num_grade);

	if (num_grade > 100 || num_grade < 0) {
		printf("Invalid grade entered.");
		return (0);
	}
	else {
		if (num_grade >= 91)
			letter_grade = 'A';
		else if (num_grade >= 81)
			letter_grade = 'B';
		else if (num_grade >= 71)
			letter_grade = 'C';
		else if (num_grade >= 61)
			letter_grade = 'D';
		else
			letter_grade = 'F';
	}

	printf("Your letter grade is: %c", letter_grade);
	return(0);
}
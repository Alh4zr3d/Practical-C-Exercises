#include <stdio.h>
#include <math.h>

int main() {
	char line[100];
	float num_grade;
	char letter_grade;
	char modifier;

	printf("Please enter your numeric grade: ");
	fgets(line, sizeof(line), stdin);
	sscanf_s(line, "%f", &num_grade);

	if (num_grade > 100 || num_grade < 0) {
		printf("Invalid grade entered.");
		return (0);
	}
	else {
		if (num_grade >= 91) {
			letter_grade = 'A';
			if (fmodf(num_grade,10) == 0 || fmodf(num_grade, 10) >= 8)
				modifier = '+';
			else if (fmodf(num_grade, 10))
				modifier = '\0';
			else
				modifier = '-';
		}
		else if (num_grade >= 81) {
			letter_grade = 'B';
			if (fmodf(num_grade, 10) == 0 || fmodf(num_grade, 10) >= 8)
				modifier = '+';
			else if (fmodf(num_grade, 10) >= 4)
				modifier = '\0';
			else
				modifier = '-';
		}
		else if (num_grade >= 71) {
			letter_grade = 'C';
			if (fmodf(num_grade, 10) == 0 || fmodf(num_grade, 10) >= 8)
				modifier = '+';
			else if (fmodf(num_grade, 10) >= 4)
				modifier = '\0';
			else
				modifier = '-';
		}
		else if (num_grade >= 61) {
			letter_grade = 'D';
			if (fmodf(num_grade, 10) == 0 || fmodf(num_grade, 10) >= 8)
				modifier = '+';
			else if (fmodf(num_grade, 10) >= 4)
				modifier = '\0';
			else
				modifier = '-';
		}
		else
			letter_grade = 'F';
	}

	printf("Your letter grade is: %c%c", letter_grade, modifier);
	return(0);
}
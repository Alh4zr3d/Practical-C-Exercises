/* 
Airline reservation struct with the following data:

Flight Number (11-char string)
Originating airport code (4-char string)
Destination airport code (4-char string)
Departure Time (6-char string)
Ending Time (6-char string)

Program is to 

*/

#include <stdio.h>
#include <string.h>

struct flight {
	char num[11];
	char dept_apt[4];
	char dest_apt[4];
	char dept_time[6];
	char dest_time[6];
};

int main() {

	/* Initializing an array of flight structs with sample data just as a POC */
	struct flight flts[5] = {
		{
			"AA1234", "DWI", "ATL", "21:10", "23:30"
		},
		{
			"BB4323", "LAX", "LAS", "4:35", "8:05"
		},
		{
			"SW2089", "LAX", "STL", "9:55", "14:20"
		},
		{
			"DB3145", "STL", "MCO", "2:10", "5:45"
		},
		{
			"PA2109", "DEN", "PHX", "20:50", "22:05"
		},
	};

	char line[100];
	char apt1[4];
	char apt2[4];

	/* Only three-character strings allowed. */
	printf("Enter the three-letter designator of the first airport:");
	fgets(line, sizeof(line), stdin);

	/* Remove trailing newline from fgets() */
	line[strcspn(line, "\r\n")] = '\0';

	if (strlen(line) != 3) {
		printf("Invalid input.");
		return(0);
	}
	/* Input verified; place in appropriate variable from buffer.*/
	strcpy_s(apt1, 4, line);

	printf("Enter the three-letter designator of the second airport:");
	fgets(line, sizeof(line), stdin);

	line[strcspn(line, "\r\n")] = '\0';

	if (strlen(line) != 3) {
		printf("Invalid input.");
		return(0);
	}

	strcpy_s(apt2, 4, line);

	/* 
	Iterate through the array of structs, checking the deptarture airport for each
	and outputting the flight number if it matches one of the two airports
	*/
	for (int i = 0; i < 5; i++) {
		if (_stricmp(flts[i].dept_apt,apt1) == 0)
			printf("%s\n", flts[i].num);
		/* In case the user inputs the same airport twice, only check the flight num once. */
		if (_stricmp(apt1, apt2) == 0)
			continue;
		if (_stricmp(flts[i].dept_apt, apt2) == 0)
			printf("%s\n", flts[i].num);
	}

	return (0);
}
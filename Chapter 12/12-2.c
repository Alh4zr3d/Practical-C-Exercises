/* Program to enter two times, then calculate the difference between two times in minutes. */

#include <stdio.h>
#include <stdlib.h>

struct time {
	int hours;
	int minutes;
};

int main() {
	char line[100];
	struct time time1;
	struct time time2;

	int time_diff(struct time, struct time);

	printf("Enter the first time (between 0:00 and 23:59): ");
	fgets(line, sizeof(line), stdin);
	sscanf_s(line, "%d:%d", &time1.hours, &time1.minutes);

	/* Check for invalid input, simply return if detected.*/

	if (time1.hours >= 24 || time1.hours < 0 || time1.minutes >= 60 || time1.minutes < 0) {
		printf("Invalid time format.\n");
		return (0);
	}

	printf("Enter the second time (between 0:00 and 23:59): ");
	fgets(line, sizeof(line), stdin);
	sscanf_s(line, "%d:%d", &time2.hours, &time2.minutes);

	if (time2.hours >= 24 || time2.hours < 0 || time2.minutes >= 60 || time2.minutes < 0) {
		printf("Invalid time format.\n");
		return (0);
	}

	printf("The difference between these two times in minutes is: %d minutes\n", time_diff(time1,time2));

	return (0);
}

int time_diff(struct time t1, struct time t2) {
	/* Calculate total minutes since 0:00 on a given day */

	int time1 = (t1.hours * 60) + t1.minutes;
	int time2 = (t2.hours * 60) + t2.minutes;

	/* Return the difference */

	return (abs(time1 - time2));
}
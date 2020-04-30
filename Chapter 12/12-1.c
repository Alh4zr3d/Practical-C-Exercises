/* Simple program to design a struct for mailing list data and print the data */

#include <stdio.h>

struct recipient {
	char first_name[30];
	char last_name[30];
	int age;
	char street[100];
	char city[30];
	char state[3];
	char zip[6];
};

int main() {

	void list_Recipients(struct recipient[], int);

	struct recipient List1[2] = {
		{
			"John",
			"Smith",
			35,
			"123 Test Avenue",
			"Kansas City",
			"MO",
			"12345"
		},
		{
			"Jane",
			"Doe",
			21,
			"987 Autopsy Drive",
			"Philadelphia",
			"PA",
			"98765"
		}
	};

	list_Recipients(List1, 2);

	return (0);
}

void list_Recipients(struct recipient list[], int num) {
	for (int i = 0; i < num; i++) {
		printf("Name: %s %s\n", list[i].first_name, list[i].last_name);
		printf("Age: %d\n", list[i].age);
		printf("Street: %s\n", list[i].street);
		printf("City, State, Zip: %s, %s %s\n", list[i].city, list[i].state, list[i].zip);
		printf("\n");
	}
}
#include <stdio.h>
int main() {
	int age;
	int day;
	int category;
	int price;
	while (age!=0) {
	
	printf("=====================================\n");
	printf("         TICKETING SYSTEM           \n");
	printf("=====================================\n");
	printf("Enter your age: ");
	scanf("%d", &age);
	if (age==0) {
		break;
	}
	printf("1. Regular Movie\n");
	printf("2. 3D Movie\n");
	printf("3. Premiere Movie\n");
	printf("Enter your category: ");
	scanf("%d", &category);
	
	switch (category) {
		case 1: {
			price= 500;
			break;
		}
		case 2: {
			price= 800;
			break;
		}
		case 3: {
			price= 1200;
			break;
		}
	}
	if (age < 13) {
		price = price * 0.70;
		printf("You recieved a child discount of 0.30\n");
	}
	else if (age >= 60 ) {
		price = price * 0.80;
		printf("You recieved a senior discount of 0.20\n");
	}
	else {
		price = price;
		printf("No discount applied\n");
	}
	 
	printf("Enter the current day number (1 to 31): ");
	scanf("%d", &day);
	if(day% 5 == 0) {
		price = price-50;
		printf("You got bonus day discount\n");
	}
	if (price < 100) {
		price = 100;
	}
	printf("ticket price= %d\n", price);
	
}
	
	return 0;
}

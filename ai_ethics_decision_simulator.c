#include <stdio.h>
void scenario1();
void scenario2();
void scenario3();
void analyze(int choice, int type);

void scenario1() {
	int choice;

	printf("\n--- Scenario 1: Self-Driving Car ---\n");
	printf("A car is about to crash.\n");
	printf("1. Save passenger\n");
	printf("2. Save pedestrians\n");

	printf("Enter your choice: ");
	scanf("%d", &choice);

	analyze(choice, 1);
}
void scenario2() {
	int choice;

	printf("\n--- Scenario 2: Medical Decision ---\n");
	printf("Only one ventilator available.\n");
	printf("1. Save young patient\n");
	printf("2. Save elderly patient\n");

	printf("Enter your choice: ");
	scanf("%d", &choice);

	analyze(choice, 2);
}
void scenario3() {
	int choice;

	printf("\n--- Scenario 3: Hiring AI ---\n");
	printf("Two candidates:\n");
	printf("1. Highly skilled but biased history\n");
	printf("2. Average but fair\n");

	printf("Enter your choice: ");
	scanf("%d", &choice);

	analyze(choice, 3);
}
void analyze(int choice, int type) {

	printf("\n--- AI Ethical Analysis ---\n");
    if(type == 1) {
		if(choice == 1) {
			printf("You prioritized individual safety.\n");
			printf("Theory: Individual Rights\n");
			printf("Score: Neutral\n");
		} else {
			printf("You prioritized saving more lives.\n");
			printf("Theory: Utilitarian Ethics\n");
			printf("Score: Good\n");
		}
	}

	else if(type == 2) {
		if(choice == 1) {
			printf("You chose long-term potential.\n");
			printf("Theory: Utilitarian Ethics\n");
			printf("Score: Good\n");
		} else {
			printf("You respected equal value of life.\n");
			printf("Theory: Fairness\n");
			printf("Score: Neutral\n");
		}
	}

	else if(type == 3) {
		if(choice == 1) {
			printf("You prioritized skill over fairness.\n");
			printf("Risk: Bias in system\n");
			printf("Score: Risky\n");
		} else {
			printf("You prioritized fairness.\n");
			printf("Theory: Ethical AI\n");
			printf("Score: Good\n");
		}
	}
}
int main() {
	int choice;
    while(1) {
		printf("\n=== AI Ethics Decision Simulator ===\n");
		printf("1. Car Accident Scenario\n");
		printf("2. Medical Scenario\n");
		printf("3. Hiring Scenario\n");
		printf("4. Exit\n");

		printf("Enter choice: ");
		scanf("%d", &choice);

		switch(choice) {
		case 1:
			scenario1();
			break;
		case 2:
			scenario2();
			break;
		case 3:
			scenario3();
			break;
		case 4:
			return 0;
		default:
			printf("Invalid choice!\n");
		}
	}
}

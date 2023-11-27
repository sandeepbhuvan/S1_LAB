
#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node* next;
};

struct node* head = NULL;

void insertAtBeginning(int data) {
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->data = data;
	temp->next = head;
	head = temp;
}

void insertAtEnd(int data) {
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->data = data;
	temp->next = NULL;
	if (head == NULL) {
		head = temp;
		return;
	}
	struct node* ptr = head;
	while (ptr->next != NULL) {
		ptr = ptr->next;
	}
	ptr->next = temp;
}

void insertAtPosition(int data, int position) {
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->data = data;
	if (position == 1) {
		temp->next = head;
		head = temp;
		return;
	}
	struct node* ptr = head;
	for (int i = 1; i < position - 1; i++) {
		ptr = ptr->next;
	}
	temp->next = ptr->next;
	ptr->next = temp;
}

void deleteAtBeginning() {
	if (head == NULL) {
		printf("List is empty\n");
		return;
	}
	struct node* temp = head;
	head = head->next;
	free(temp);
}

void deleteAtEnd() {
	if (head == NULL) {
		printf("List is empty\n");
		return;
	}
	struct node* ptr = head;
	while (ptr->next->next != NULL) {
		ptr = ptr->next;
	}
	struct node* temp = ptr->next;
	ptr->next = NULL;
	free(temp);
}

void deleteAtPosition(int position) {
	if (head == NULL) {
		printf("List is empty\n");
		return;
	}
	if (position == 1) {
		struct node* temp = head;
		head = head->next;
		free(temp);
		return;
	}
	struct node* ptr = head;
	for (int i = 1; i < position - 1; i++) {
		ptr = ptr->next;
	}
	struct node* temp = ptr->next;
	ptr->next = ptr->next->next;
	free(temp);
}

void search(int data) {
	if (head == NULL) {
		printf("List is empty\n");
		return;
	}
	struct node* ptr = head;
	int position = 1;
	while (ptr != NULL) {
		if (ptr->data == data) {
			printf("%d found at position %d\n", data, position);
			return;
		}
		ptr = ptr->next;
		position++;
	}
	printf("%d not found\n", data);
}

void display() {
	if (head == NULL) {
		printf("List is empty\n");
		return;
	}
	struct node* ptr = head;
	while (ptr != NULL) {
		printf("%d ", ptr->data);
		ptr = ptr->next;
	}
	printf("\n");
}

int main() {
	int choice, data, position;
	while (1) {
		printf("1. Insert at beginning\n");
		printf("2. Insert at end\n");
		printf("3. Insert at position\n");
		printf("4. Delete at beginning\n");
		printf("5. Delete at end\n");
		printf("6. Delete at position\n");
		printf("7. Display\n");
		printf("8. Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		switch (choice) {
			case 1:
				printf("Enter data: ");
				scanf("%d", &data);
				insertAtBeginning(data);
				break;
			case 2:
				printf("Enter data: ");
				scanf("%d", &data);
				insertAtEnd(data);
				break;
			case 3:
				printf("Enter data: ");
				scanf("%d", &data);
				printf("Enter position: ");
				scanf("%d", &position);
				insertAtPosition(data, position);
				break;
			case 4:
				deleteAtBeginning();
				break;
			case 5:
				deleteAtEnd();
				break;
			case 6:
				printf("Enter position: ");
				scanf("%d", &position);
				deleteAtPosition(position);
				break;
			case 7:
				display();
				break;
			case 8:
				exit(0);
			default:
				printf("Invalid choice\n");
		}
	}
	return 0;
}


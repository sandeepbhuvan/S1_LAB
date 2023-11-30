//Program for menu-driven implementation of Doubly Linked List
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node* head= NULL;

void insertAtBeginning(int data)
{
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;

    if(head == NULL)
    {
        head = newNode;
    }
    else
    {
        head->prev = newNode;
        newNode->next = head;
        head = newNode;
    }
}

void insertAtEnd(int data)
{
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;

    if(head == NULL)
    {
        head = newNode;
    }
    else
    {
        struct node *temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}

void insertAtPosition(int data, int position)
{
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;

    if(head == NULL)
    {
        head = newNode;
    }
    else
    {
        struct node *temp = head;
        int i = 1;
        while(i < position-1)
        { 
            temp = temp->next;
            i++;
        }
        newNode->next = temp->next;
        newNode->prev = temp;
        temp->next->prev = newNode;
        temp->next = newNode;
       
    }
}

void deleteAtBeginning()
{
    if(head == NULL)
    {
        printf("List is empty");
    }
    else
    {
        struct node *temp = head;
        head = head->next;
        head->prev = NULL;
        free(temp);
    }
}

void deleteAtEnd()
{
    if(head == NULL)
    {
        printf("List is empty");
    }
    else
    {
        struct node *temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->prev->next = NULL;
        free(temp);
    }
}

void deleteAtPosition(int position)
{   struct node* del;
    if(head == NULL)
    {
        printf("List is empty");
    }
    else
    {
        struct node *temp = head;
        int i = 1;
        while(i < position-1)
        {   
            temp = temp->next;
            i++;
        }
        del = temp->next;
        printf("%d is deleted \n",del->data);
        temp->next = del->next;
        del->next->prev = temp;
        free(del);
    }
}

void display()
{
    if(head == NULL)
    {
        printf("List is empty");
    }
    else
    {
        struct node *temp = head;
        while(temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}

void reverseDisplay()
{
    if(head == NULL)
    {
        printf("List is empty");
    }
    else
    {
        struct node *temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        while(temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->prev;
        }
    }
}

void search(int data)
{   int flag=0;
    int count=0;
    if(head == NULL)
    {
        printf("List is empty");
    }
    else
    {
        struct node *temp = head;
        while(temp != NULL)
        {
            if(temp->data == data)
            {
                flag =1;
                break;
            }
            count++;
            temp = temp->next;
        }
        if(flag == 0)
        { printf("\nElement not found\n");}
        else{
            printf("\nElement found at position %d\n",count+1);
        }
    }
}

void main()
{
    int choice, data, position;
    while(1)
    {   printf("\n1. Insert at beginning\n");
        printf("2. Insert at end\n");
        printf("3. Insert at position\n");
        printf("4. Delete at beginning\n");
        printf("5. Delete at end\n");
        printf("6. Delete at position\n");
        printf("7. Display\n");
        printf("8. Search\n");
        printf("9. Reverse Display\n");
        printf("10. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
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
                printf("Enter data: ");
                scanf("%d", &data);
                search(data);
                break;
            case 9:
                reverseDisplay();
                break;
            case 10:
                exit(0);
            default:
                printf("Invalid choice");
        }
    }
}

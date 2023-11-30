#include<stdio.h>  
#include<stdlib.h>  
struct node   
{  
    int data;  
    struct node *next;   
};  
struct node *head;  

void insertion(int item)  
{  
    struct node *ptr = (struct node *)malloc(sizeof(struct node));     
    struct node *temp;  
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW\n");  
    }  
    else  
    {  
        ptr -> data = item;  
        if(head == NULL)  
        {  
            head = ptr;  
            ptr -> next = head;  
        }  
        else  
        {  
            temp = head;  
            while(temp->next != head)  
                temp = temp->next;  
            ptr->next = head;   
            temp -> next = ptr;   
            head = ptr;  
        }  
    }  
}

void delete(int item)  
{  
    struct node *ptr;  
    if(head == NULL)  
    {  
        printf("\nUNDERFLOW\n");  
    }  
    else if((head)->data == item)  
    {  
        ptr = head;  
        head = (head)->next;  
        free(ptr);  
    }  
    else  
    {  
        ptr = head;   
        while(ptr->next != head && ptr->next->data != item)  
            ptr = ptr -> next;  
        if(ptr->next == head)  
        {  
            printf("\nElement not found\n");  
        }  
        else  
        {  
            struct node *temp;  
            temp = ptr -> next;  
            ptr -> next = temp -> next;  
            free(temp);  
        }  
    }  
}

void search(int item)  
{  
    struct node *ptr = head;  
    if(head == NULL)  
    {  
        printf("\nEmpty List\n");  
    }  
    else  
    {   
        do{  
            if(ptr->data == item)  
            {  
                printf("\nItem found\n");  
                break;  
            }  
            ptr = ptr -> next;  
        }while(ptr != head);  
        if(ptr == head)
        {  
            printf("\nItem not found\n");  
        }  
    }     
}

void display()  
{  
    struct node *ptr;  
    ptr=head;  
    if(head == NULL)  
    {  
        printf("\nEmpty List\n");  
    }     
    else  
    {  
        printf("\nPrinting values . . . . .\n");  
          
        do{  
            printf("%d\n",ptr->data);  
            ptr = ptr->next;  
        }while(ptr != head);  
    }  
}

int main ()  
{  
    int choice,item;  
    do   
    {  
        printf("\n1.Insert\n2.Delete\n3.Search\n4.Display\n5.Exit\n");  
        printf("\nEnter your choice : ");  
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
                printf("\nEnter the item which you want to insert?\n");  
                scanf("%d",&item);  
                insertion(item);  
                break;   
            case 2:  
                printf("\nEnter the item which you want to delete?\n");  
                scanf("%d",&item);  
                delete(item);  
                break;   
            case 3:  
                printf("\nEnter the item which you want to search?\n");  
                scanf("%d",&item);  
                search(item);  
                break;   
            case 4:  
                display();  
                break;  
            case 5:  
                exit(0);  
                break;  
            default:  
                printf("\nPlease enter valid choice\n");  
        }  
    }while(choice != 5);  
    return 0;
}

//implementation of set data structure using bit string c code

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000000

typedef struct set
{
    char *bit_string;
    int size;
} set;

set *create_set(int size)
{
    set *s = (set *)malloc(sizeof(set));
    s->size = size;
    s->bit_string = (char *)malloc(sizeof(char) * size);
    memset(s->bit_string, '0', size);
    return s;
}

void insert(set *s, int element)
{
    if (element > s->size)
    {
        printf("element out of range\n");
        return;
    }
    s->bit_string[element - 1] = '1';
}

void delete (set *s, int element)
{
    if (element > s->size)
    {
        printf("element out of range\n");
        return;
    }
    s->bit_string[element - 1] = '0';
}

int is_member(set *s, int element)
{
    if (element > s->size)
    {
        printf("element out of range\n");
        return -1;
    }
    if (s->bit_string[element - 1] == '1')
        return 1;
    return 0;
}

set *union_set(set *s1, set *s2)
{
    if (s1->size != s2->size)
    {
        printf("size of sets are not equal\n");
        return NULL;
    }
    set *s = create_set(s1->size);
    for (int i = 0; i < s1->size; i++)
    {
        if (s1->bit_string[i] == '1' || s2->bit_string[i] == '1')
            s->bit_string[i] = '1';
    }
    return s;
}

set *intersection_set(set *s1, set *s2)
{
    if (s1->size != s2->size)
    {
        printf("size of sets are not equal\n");
        return NULL;
    }
    set *s = create_set(s1->size);
    for (int i = 0; i < s1->size; i++)
    {
        if (s1->bit_string[i] == '1' && s2->bit_string[i] == '1')
            s->bit_string[i] = '1';
    }
    return s;
}

set *difference_set(set *s1, set *s2)
{
    if (s1->size != s2->size)
    {
        printf("size of sets are not equal\n");
        return NULL;
    }
    set *s = create_set(s1->size);
    for (int i = 0; i < s1->size; i++)
    {
        if (s1->bit_string[i] == '1' && s2->bit_string[i] == '0')
            s->bit_string[i] = '1';
    }
    return s;
}

void display(set *s)
{
    for (int i = 0; i < s->size; i++)
    {
        if (s->bit_string[i] == '1')
            printf("%d ", i + 1);
    }
    printf("\n");
}

//menu for set implementation and accept input for calling functions
void main()
{
    int size, choice, element;
    printf("enter size of set\n");
    scanf("%d", &size);
    set *s1 = create_set(size);
    set *s2 = create_set(size);
    while (1)
    {
        printf("1.insert element in set 1\n2.insert element in set 2\n3.delete element from set 1\n4.delete element from set 2\n5.check if element is member of set 1\n6.check if element is member of set 2\n7.union of set 1 and set 2\n8.intersection of set 1 and set 2\n9.difference of set 1 and set 2\n10.display set 1\n11.display set 2\n12.exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("enter element to insert\n");
            scanf("%d", &element);
            insert(s1, element);
            break;
        case 2:
            printf("enter element to insert\n");
            scanf("%d", &element);
            insert(s2, element);
            break;
        case 3:
            printf("enter element to delete\n");
            scanf("%d", &element);
            delete (s1, element);
            break;
        case 4:
            printf("enter element to delete\n");
            scanf("%d", &element);
            delete (s2, element);
            break;
        case 5:
            printf("enter element to check\n");
            scanf("%d", &element);
            if (is_member(s1, element))
                printf("element is member of set 1\n");
            else
                printf("element is not member of set 1\n");
            break;
        case 6:
            printf("enter element to check\n");
            scanf("%d", &element);
            if (is_member(s2, element))
                printf("element is member of set 2\n");
            else
                printf("element is not member of set 2\n");
            break;
        case 7:
            union_set(s1, s2);
            break;
        case 8:
            intersection_set(s1, s2);
            break;
        case 9:
            difference_set(s1, s2);
            break;
        case 10:
            display(s1);
            break;
        case 11:
}

#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *prev;
    int info;
    struct node *next;
};
void insertStart(struct node **s, int data);
void insertLast(struct node **s, int data);
void insertAfter(struct node **s, struct node *ptr, int data);
int main() 
{
void insertAfter(struct node **s, struct node *ptr, int data){
    struct  node*p;
    if (ptr == NULL)
        printf("invalid insertion");
    else
    {
        p = (struct node *)malloc(sizeof(struct node));
        p->info = data;
        p->prev = ptr;
        p->next = ptr->next;
        if (ptr->next != NULL)
        {
            ptr->next->prev = p;
            ptr->next = p;
        }
    }
}
{
    struct node *ptr;
    struct node *start = NULL;
    insertStart(&start, 10);
    insertLast(&start, 20);
    ptr = find(&start, 20);
    // ptr = rand(&start, 20);
    insertAfter(&start, ptr, 30);
    return 0;
}

void insertLast(struct node **s, int data)
{
    struct node *p, *t;
    p = (struct node *)malloc(sizeof(struct node));
    p->info = data;
    p->next = NULL;
    if (*s == NULL)
    {
        p->prev = NULL;
        *s = p;
    }
    else
    {
        t = *s;
        while (t->next != NULL)
            t = t->next;
        p->prev = t;
        t->next = p;
    }
}

void insertStart(struct node **s, int data)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->info = data;
    p->prev = NULL;
    if (*s == NULL)
    {
        p->next = NULL;
        *s = p;
    }
}
}

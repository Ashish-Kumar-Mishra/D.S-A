#include <stdio.h>
#include <stdlib.h>
void insertNode();
struct node
{
    /* data */
    int info;
    struct node *link;
};
struct node *START = NULL;
struct node *CreateNode()
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    return n;
}
void insertNode()
{
    struct node *temp, *t;
    temp = CreateNode();
    printf("enter a number");
    scanf("%d", &temp->info);
    temp->link = NULL;
    if (START == NULL)
        START = temp;
    else
    {
        t = START;
        while (t->link != NULL)
        {
            t = t->link;
        }
        t->link = temp;
    }
}
void deleteNode()
{
    struct node *r;
    if (START == NULL)
        printf("link is empty");
    else
    {
        r = START;
        START = START->link;
        free(r);
    }
}
void viewList()
{
    struct node *L,*t;
    if (START == NULL)
        printf("list is empty");
    else
    {
        t = START;
        while (t !=NULL)
            {

                printf("%d", t->info);
                t = t->link;
            }
    }
}
int menu()
{
    int ch;
    printf("\n1 Add value to list ");
    printf("\n2 delete first value");
    printf("\n3 view list");
    printf("\n4 exit");
    printf("\n5 Enter u choice");
    scanf("%d", &ch);
    return (ch);
}
int main()
{
    while (1)
    {
        switch (menu())
        {
        case 1:
            insertNode();
            break;
        case 2:
            deleteNode();
            break;
        case 3:
            viewList();
            break;
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Not available in u choice");
        }
        
    }
    return 0;
}

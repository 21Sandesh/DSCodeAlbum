#include <stdio.h>
#include <stdlib.h>
struct dnode
{
    int data;
    struct dnode *next;
    struct dnode *prev;
};
struct dnode *dhead = NULL;
void dcreate();
void dbeginsert();
void dposinsert();
void dendinsert();
void dbegdelete();
void dposdelete();
void denddelete();
void dreverse();
void ddisplay_Doublelinkedlist();
int DoubleLinkedlist()
{
    int choice = 0;
    while (choice != 10)
    {
        printf("\n-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x");
        printf("\n|         1. create                             |");
        printf("\n|         2. beginsert                          |");
        printf("\n|         3. posinsert                          |");
        printf("\n|         4. endinsert                          |");
        printf("\n|         5. beginsert                          |");
        printf("\n|         6. posdelete                          |");
        printf("\n|         7. enddelete                          |");
        printf("\n|         8. reverse                            |");
        printf("\n|         9. Display                            |");
        printf("\n|        10. The end                            |");
        printf("\n-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x");
        printf("\nEnter the choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            dcreate();
            break;
        case 2:
            dbeginsert();
            break;
        case 3:
            dposinsert();
            break;
        case 4:
            dendinsert();
            break;
        case 5:
            dbegdelete();
            break;
        case 6:
            dposdelete();
            break;
        case 7:
            denddelete();
            break;
        case 8:
            dreverse();
            break;
        case 9:
            ddisplay_Doublelinkedlist();
            break;
        case 10:
            printf("The operation is end\n");
            break;
        default:
            printf("Invalid choice");
        }
    }
}
void dcreate()
{
    int n;
    printf("Enter the number of node: ");
    scanf("%d", &n);
    if (n != 0)
    {
        struct dnode *newnode, *temp;
        newnode = (struct dnode *)malloc(sizeof(struct dnode));
        printf("Enter the data of 1 node: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        newnode->prev = NULL;
        dhead = newnode;
        temp = dhead;
        for (int i = 2; i <= n; i++)
        {
            newnode = (struct dnode *)malloc(sizeof(struct dnode));
            printf("Enter the data of %d node: ", i);
            scanf("%d", &newnode->data);
            newnode->next = NULL;
            newnode->prev = NULL;
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
    }
}
void dbeginsert()
{
    struct dnode *fnode;
    fnode = (struct dnode *)malloc(sizeof(struct dnode));
    printf("Enter the data you want to insert at begin: ");
    scanf("%d", &fnode->data);
    fnode->next = dhead;
    fnode->prev = NULL;
    dhead = fnode;
}
void dposinsert()
{
    int pos;
    struct dnode *newnode, *temp, *ptr;
    printf("Enter the position where you want to insert a data: ");
    scanf("%d", &pos);
    newnode = (struct dnode *)malloc(sizeof(struct dnode));
    printf("Enter the data: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    newnode->prev = NULL;
    temp = dhead;
    for (int i = 1; i < pos; i++)
    {
        ptr = temp;
        temp = temp->next;
    }
    ptr->next = newnode;
    newnode->prev = ptr;
    newnode->next = temp;
    temp->prev = newnode;
}
void dendinsert()
{
    struct dnode *newnode, *temp;
    newnode = (struct dnode *)malloc(sizeof(struct dnode));
    printf("Enter the data you want toinsert at last: ");
    scanf("%d", &newnode->data);
    if (dhead == NULL)
    {
        newnode->next = NULL;
        newnode->prev = NULL;
        dhead = newnode;
    }
    else
    {
        temp = dhead;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->prev = temp;
        newnode->next = NULL;
    }
}
void dbegdelete()
{
    struct dnode *temp;
    if (dhead == NULL)
    {
        printf("List is empty");
    }
    else
    {
        temp = dhead;
        dhead = dhead->next;
        dhead->prev = NULL;
        free(temp);
    }
}
void dposdelete()
{
    int pos;
    struct dnode *temp, *ptr;
    printf("Enter the position where you want to delete a data: ");
    scanf("%d", &pos);
    if (dhead == NULL)
    {
        printf("List is empty");
    }
    else
    {
        temp = dhead;
        for (int i = 1; i < pos; i++)
        {
            ptr = temp;
            temp = temp->next;
        }
        ptr->next = temp->next;
        temp->next->prev = ptr;
        free(temp);
    }
}
void denddelete()
{
    struct dnode *temp, *ptr;
    if (dhead == NULL)
    {
        printf("List is empty");
    }
    else
    {
        temp = dhead;
        while (temp->next != NULL)
        {
            ptr = temp;
            temp = temp->next;
        }
        ptr->next = NULL;
        free(temp);
    }
}
void dreverse()
{
    struct dnode *currentnode, *nextnode, *prevnode;
    nextnode = dhead;
    currentnode = dhead;
    prevnode = NULL;
    while (nextnode != NULL)
    {
        nextnode = nextnode->next;
        currentnode->next = prevnode;
        currentnode->prev = nextnode;
        prevnode = currentnode;
        currentnode = nextnode;
    }
    dhead = prevnode;
}
void ddisplay_Doublelinkedlist()
{
    struct dnode *temp;
    if (dhead == NULL)
    {
        printf("List is empty");
    }
    else
    {
        temp = dhead;
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
    printf("\n");
}
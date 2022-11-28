#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;
void create();
void beginsert();
void posinsert();
void endinsert();
void begdelete();
void posdelete();
void enddelete();
void reverse();
void display();
int Linkedlist()
{
    int choice=0;
    while(choice!=10)
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
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                create();
                break;
            case 2:
                beginsert();
                break;
            case 3:
                posinsert();
                break;
            case 4:
                endinsert();
                break;
            case 5:
                begdelete();
                break;
            case 6:
                posdelete();
                break;
            case 7:
                enddelete();
                break;
            case 8:
                reverse();
                break;
            case 9:
                display();
                break;
            case 10:
                printf("The operation is end\n");
                display();
                break;
            default:
                printf("Invalid choice");

        }
    }
}
void create()
{
    int n;
    printf("Enter number of node: ");
    scanf("%d",&n);
    if(n!=0)
    {
        struct node *newnode,*temp;
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data of 1 node: ");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        head=newnode;
            temp=head;
        for(int i=2;i<=n;i++)
            {
                newnode=(struct node*)malloc(sizeof(struct node));
                printf("Enter the data of %d node: ",i);
                scanf("%d",&newnode->data);
                newnode->next=NULL;
                temp->next=newnode;
                temp=newnode;
            }
        
    }
    printf("\n");
}

void beginsert()
{
    struct node *fnode;
    fnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data you want to insert at first: ");
    scanf("%d",&fnode->data);
    fnode->next=head;
    head=fnode;
        
    
    printf("\n");
}
void posinsert()
{
    int pos;
    struct node *newnode,*temp,*ptr;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the position where you want to  insert a data: ");
    scanf("%d",&pos);
    printf("Enter the data: ");
    scanf("%d",&newnode->data);
    temp=head;
    for(int i=1;i<pos;i++)
    {
        ptr=temp;
        temp=temp->next;
    }
    ptr->next=newnode;
    newnode->next=temp;
    printf("\n");
}
void endinsert()
{
    struct node *lnode,*temp;
    lnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data you want to insert at last: ");
    scanf("%d",&lnode->data);
    lnode->next=NULL;
    if(head==NULL)
    {
        head=lnode;
    }
    else{
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=lnode;
    }
    printf("\n");
}
void begdelete()
{
    struct node *temp;
    if(head==NULL)
    {
        printf("List is empty");
    }
    else{
        temp=head;
        head=head->next;
        free(temp);
    }
    printf("\n");
}
void posdelete()
{
    struct node *temp,*ptr;
    int pos;
    printf("Enter the the position from where you want to delete a data: ");
    scanf("%d",&pos);
    temp=head;
    for(int i=1;i<pos;i++)
    {
        ptr=temp;
        temp=temp->next;
    }
    ptr->next=temp->next;
    free(temp);
    printf("\n");
}
void enddelete()
{
    struct node *temp,*ptr;
    if(head==NULL)
    {
        printf("List is empty");
    }
    else{
        temp=head;
        while(temp->next!=NULL)
        {
            ptr=temp;
            temp=temp->next;
        }
        ptr->next=NULL;
        free(temp);
    }
    printf("\n");
}
void reverse()
{
    struct node *currentnode,*nextnode,*prevnode;
    prevnode=NULL;
    currentnode=head;
    nextnode=head;
    while(nextnode!=NULL)
    {
        nextnode=nextnode->next;
        currentnode->next=prevnode;
        prevnode=currentnode;
        currentnode=nextnode;
    }
    head=prevnode;
}
void display()
{
    struct node *temp;
    if(head==NULL)
    {
        printf("List is empty");
    }
    else{
        temp=head;
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
    printf("\n");
}
#include<stdio.h>
#include<stdlib.h>
struct queue{
    int data;
    struct queue *next;
};
struct queue *front,*rear=NULL;
void enqueue();
void dequeue();
void qpeek();
void display_queue();
int Queue()
{
    int choice=0;
    while(choice!=5)
    {
        printf("\n\t-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x");
        printf("\n\t|          1. enqueue                            |");
        printf("\n\t|          2. dequeue                            |");
        printf("\n\t|          3. peek                               |");
        printf("\n\t|          4. Display                            |");
        printf("\n\t|          5. The end                            |");
        printf("\n\t-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x");
        printf("\nEnter the choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                enqueue();
                printf("\n");
                break;
            case 2:
                dequeue();
                printf("\n");
                break;
            case 3:
                qpeek();
                printf("\n");
                break;
            case 4:
                display_queue();
                printf("\n");
                break;
            case 5:
                printf("The operation is end\n");
                break;
            default:
                printf("Invalid choice");
        }
    }
}
void enqueue()
{
    struct queue *newnode;
    newnode=(struct queue*)malloc(sizeof(struct queue));
    printf("Enter the data: ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(front==NULL && rear==NULL)
    {
        front=rear=newnode;
    }
    else{
        rear->next=newnode;
        rear=newnode;
    }
}
void dequeue()
{
    struct queue *temp;
    if(front==NULL && rear==NULL)
    {
        printf("Queue is empty");
    }
    else{
        temp=front;
        printf("%d is delete from the queue",temp->data);
        front=front->next;
        free(temp);
    }
}
void qpeek()
{
    if(front==NULL && rear==NULL)
    {
        printf("Queue is empty");
    }
    else{
       printf("The top most element is %d",front->data); 
    }
}
void display_queue()
{
    struct queue *temp;
    if(front==NULL && rear==NULL)
    {
        printf("The queue is empty");
    }
    else{
        temp=front;
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
}
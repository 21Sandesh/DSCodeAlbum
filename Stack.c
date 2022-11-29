#include<Stdio.h>
#include<stdlib.h>
struct stack{
    int data;
    struct stack *next;
};
struct stack *top=NULL;
void push();
void pop();
void peek();
void display_stack();
int Stack()
{
    int choice=0;
    while(choice!=5)
    {
        printf("\n\t-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x");
        printf("\n\t|          1. push                               |");
        printf("\n\t|          2. pop                                |");
        printf("\n\t|          3. peek                               |");
        printf("\n\t|          4. Display                            |");
        printf("\n\t|          5. The end                            |");
        printf("\n\t-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x");
        printf("\nEnter the choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display_stack();
                break;
            case 5:
                printf("The operation is end\n");
                break;
            default:
                printf("Invalid choice");
        }
    }
}
void push()
{
    struct stack *newnode;
    newnode=(struct stack*)malloc(sizeof(struct stack));
    printf("Enter the data: ");
    scanf("%d",&newnode->data);
    newnode->next=top;
    top=newnode;
}
void pop()
{
    struct stack *temp;
    if(top==NULL)
    {
        printf("The stack is underflow");
    }
    else{
        printf("%d is pop from stack",top->data);
        temp=top;
        top=top->next;
        free(temp);
    }
    printf("\n");
}
void peek()
{
    if(top==NULL)
    {
        printf("The satck is underflow");
    }
    else{
        printf("The top most element is %d",top->data);
    }
    printf("\n");
}
void display_stack()
{
    struct stack *temp;
    if(top==NULL)
    {
        printf("The stack is underflow");
    }
    else{
        temp=top;
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
    printf("\n");
}
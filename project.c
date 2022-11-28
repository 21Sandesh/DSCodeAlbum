#include<stdio.h>
#include<stdlib.h>
#include "Linkedlist.c"
#include "DoubleLinkedlist.c"
#include "Queue.c"
#include "Stack.c"
#include "Sorting.c"
int main()
{
    int choice=0;
    while(choice!=9)
    {
        printf("\n---------------------------------------------------------------------------------------------------------------");
        printf("\n                            Data Structure & Algorithm                                                        ");
        printf("\n----------------------------------------------------------------------------------------------------------------");
        printf("\n -x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x");
        printf("\n|   1. Linkedlist                            |");
        printf("\n|   2. DoubleLinkedlist                      |");
        printf("\n|   3. Queue                                 |");
        printf("\n|   4. Stack                                 |");
        printf("\n|   5. Tree                                  |");
        printf("\n|   6. Sorting                               |");
        printf("\n -x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x");
        printf("\nEnter the choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                Linkedlist();
                break;
            case 2:
                DoubleLinkedlist();
                break;
            case 3:
                Queue();
                break;
            case 4:
                Stack();
                break;
            // case 5:
            //     Tree();
            //     break;
            case 6:
                 Sorting();
                 break;
            default:
                printf("Invalid choice");
        }
}
}
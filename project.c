#include <stdio.h>
#include <stdlib.h>
#include "Linkedlist.c"
#include "DoubleLinkedlist.c"
#include "Queue.c"
#include "Stack.c"
#include "Sorting.c"
#include "viewSourceCode.c"

int project()
{
    system("cls");
    title();
    printf("\n\n\n");
    int opChoice = 0;
    while (opChoice != 4)
    {
        printf("\n\t -x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x");
        printf("\n\t|   1. View Source Code                      |");
        printf("\n\t|   2. Implement operations                  |");
        printf("\n\t|   3. Give Feedback                         |");
        printf("\n\t|   4. Exit                                  |");
        printf("\n\t -x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x");
        printf("\n\n");
        printf("Enter choice: ");
        scanf("%d", &opChoice);
        switch (opChoice)
        {
        case 1:
            printf("Viewing source code");
            // viewCode();
            break;
        case 2:
        {
            int choice = 0;
            datast();
            while (choice != 9)
            {
                printf("\n\t -x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x");
                printf("\n\t|   1. Linkedlist                            |");
                printf("\n\t|   2. DoubleLinkedlist                      |");
                printf("\n\t|   3. Queue                                 |");
                printf("\n\t|   4. Stack                                 |");
                printf("\n\t|   5. Tree                                  |");
                printf("\n\t|   6. Sorting                               |");
                printf("\n\t -x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x");
                printf("\nEnter the choice: ");
                scanf("%d", &choice);
                switch (choice)
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
                    break;
                }
                datast();
            }
        }
        break;
        case 3:
            printf("Give feedback");
            printf("Kindly write your feedback in feedback");
            printf(" file and execute feedback.py file...");
            break;
        case 4:
            exit(0);
        default:
            printf("Enter valid choice.");
            break;
        }
    }
    return 0;
}
void datast()
{
    printf("\n\t---------------------------------------------------------------------------------------------------------------");
    printf("\n\t                            Data Structure & Algorithm                                                        ");
    printf("\n\t----------------------------------------------------------------------------------------------------------------");
}
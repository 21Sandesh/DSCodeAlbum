#include <stdio.h>

void printCode(char *key)
{

    FILE *fp = fopen(key, "r");
    if (fp == NULL)
        return;
    do
    {
        char c = fgetc(fp);
        if (feof(fp))
            break;
        printf("%c", c);
    } while (1);
    fclose(fp);
}

void viewCode()
{
    int choice;
    printf("\n---------------------------------------------------------------------------------------------------------------");
    printf("\n                            View Source code of                                                      ");
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
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printCode("linkedList.txt");
        break;
    case 2:
        printCode("doubleLinkedList.txt");
        break;
    case 3:
        printCode("queue.txt");
        break;
    case 4:
        printCode("stack.txt");
        break;
    case 6:
    {
        int choice;
        printf("1.Bubble Sort\n");
        printf("2.Insertion Sort\n");
        printf("3.Selection Sort\n");
        printf("4.Heap Sort\n");
        printf("5.Quick Sort\n");
        printf("6.Merge Sort\n");

        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printCode("bubble_sort.txt");

            break;
        case 2:
            printCode("insertionSort.txt");

            break;
        case 3:
            printCode("selectionSort.txt");

            break;
        case 4:
            printCode("heapSort.txt");

            break;
        case 5:
            printCode("quickSort.txt");

            break;
        case 6:
            printCode("mergeSort.txt");

            break;
        default:
            printf("Invalid choice");

            break;
        }
    }
        break;
    default:
        printf("Invalid choice");
    }
}

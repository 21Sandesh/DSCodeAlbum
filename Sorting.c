#include<stdio.h>
#include<stdlib.h>
#include "Insertion_Sort.c"
#include "Selection_Sort.c"
#include "Bubble_Sort.c"
#include "Quick_Sort.c"
#include "Merge_Sort.c"
#include "Heap_Sort.c"
int Sorting()
{
    int choice=0;
    while(choice!=7)
    {
        printf("\n-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x");
        printf("\n|          1. InsertionSort                |");
        printf("\n|          2. SelectionSort                |");
        printf("\n|          3. BubbleSort                   |");
        printf("\n|          4. QuickSort                    |");
        printf("\n|          5. MergeSort                    |");
        printf("\n|          6. HeapSort                     |");
        printf("\n|          7. The End                      |");
        printf("\n-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x");
        printf("\nEnter the choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                Insertion_Sort();
                break;
            case 2:
                Selection_Sort();
                break;
            case 3:
                Bubble_Sort();
                break;
            case 4:
                Quick_Sort();
                break;
            case 5:
                Merge_Sort();
                break;
            case 6:
                Heap_Sort();
                break;
            case 7:
                printf("The Operation is end");
                break;
            default:
                printf("Invalid choice");
        }
    }
}
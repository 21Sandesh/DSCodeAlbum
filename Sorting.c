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
        printf("\n\t-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x");
        printf("\n\t|          1. InsertionSort                |");
        printf("\n\t|          2. SelectionSort                |");
        printf("\n\t|          3. BubbleSort                   |");
        printf("\n\t|          4. QuickSort                    |");
        printf("\n\t|          5. MergeSort                    |");
        printf("\n\t|          6. HeapSort                     |");
        printf("\n\t|          7. The End                      |");
        printf("\n\t-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x");
        printf("\nEnter the choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                Insertion_Sort();
                getch();
                break;
            case 2:
                Selection_Sort();
                getch();
                break;
            case 3:
                Bubble_Sort();
                getch();
                break;
            case 4:
                Quick_Sort();
                getch();
                break;
            case 5:
                Merge_Sort();
                getch();

                break;
            case 6:
                Heap_Sort();
                getch();
                break;
            case 7:
                printf("The Operation ends");
                getch();
                break;
            default:
                printf("Invalid choice");
                getch();
        }
        system("cls");
        title();
        datast();
    }
}
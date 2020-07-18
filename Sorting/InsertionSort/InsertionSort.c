#include <stdio.h>

void InsertionSort(int[], int);

int main()
{
    int NumberOfElements, i, j; //Accept the number of elements to Sort

    printf("Enter number of elements:- \n");
    scanf("%d", &NumberOfElements);

    int array[NumberOfElements];
    printf("Enter the numbers:- \n");

    for (i = 0; i < NumberOfElements; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Unsorted list is:- \n"); //Display Unsorted Array
    for (i = 0; i < NumberOfElements; i++)
    {
        printf("%d\t", array[i]); //Function for BubbleSort
    }

    InsertionSort(array, NumberOfElements);

    printf("\nSorted list in ascending order is:- \n"); //Display Sorted Array
    for (i = 0; i < NumberOfElements; i++)
    {
        printf("%d\t", array[i]);
    }

    return 0;
}

void InsertionSort(int array[], int NumberOfElements)
{
    int i, key, j;
    for (i = 1; i < NumberOfElements; i++)
    {
        key = array[i];
        j = i - 1;

        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
}

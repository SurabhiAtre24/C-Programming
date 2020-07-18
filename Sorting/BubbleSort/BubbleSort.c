#include <stdio.h>

void BubbleSort(int[], int);

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

    BubbleSort(array, NumberOfElements);

    printf("\nSorted list in ascending order is:- \n"); //Display Sorted Array
    for (i = 0; i < NumberOfElements; i++)
    {
        printf("%d\t", array[i]);
    }

    return 0;
}

void BubbleSort(int array[], int NumberOfElements)
{
    int i, j, temp = 0;
    for (i = 0 ; i < NumberOfElements - 1; i++)
    {
        for (j = 0 ; j < NumberOfElements - i - 1; j++)
        {
            if (array[j] > array[j+1]) //If the next element is smaller than the current element, they swap
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

/*
i/p:-
  3 8 5 2
first iteration:-
  3 5 2 8
second iteration:-
  3 2 5 8
third iteration:-
  2 3 5 8
*/

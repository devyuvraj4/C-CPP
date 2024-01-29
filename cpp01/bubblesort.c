#include <stdio.h>
#include <conio.h>

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; ++i)
    {
        for (j = 0; j < n - i - 1; ++j)
        {
            // Compare adjacent elements
            if (arr[j] > arr[j + 1])
            {
                // Swap if they are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d ", n);
    printf("\n");
    printf("Unsorted array: ");
    printArray(arr, n);

    // Apply bubble sort
    bubbleSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);
    getch();
    return 0;
}

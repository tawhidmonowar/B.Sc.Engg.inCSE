#include<stdio.h>

void quickSort(int A[], int low, int high)
{
    int partitionIndex;

    if (low < high) {
        partitionIndex = partition(A, low, high);
        quickSort(A, low, partitionIndex - 1);
        quickSort(A, partitionIndex + 1, high);
    }
}

int partition(int A[], int low, int high)
{
    int pivot = A[low];
    int i = low + 1;
    int j = high;
    int temp;

    do {
        while(A[i] <= pivot) {
            i++;
        }

        while(A[j] > pivot) {
            j--;
        }

        if(i < j) {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);

    temp = A[low];
    A[low] = A[j];
    A[j] = temp;

    return j;
}



int main()
{
    int position,temp,i,j,arraySize;

    printf("Enter the size of array\n");
    scanf("%d",&arraySize);

    int arrayMain[arraySize];
    printf("Enter the elements of the array\n");

    for(i=0; i<arraySize; i++) {
        scanf("%d",&arrayMain[i]);
    }

    quickSort(arrayMain, 0, arraySize-1);

    printf("After sorting array elements are\n");

    for(i=0; i<arraySize; i++) {
        printf("%d ",arrayMain[i]);
    }

    return 0;
}

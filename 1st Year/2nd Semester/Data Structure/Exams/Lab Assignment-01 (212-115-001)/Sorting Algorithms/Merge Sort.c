#include<stdio.h>

void merge(int A[], int mid, int low, int high)

{
    int i, j, k, B[100];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high) {
        if (A[i] < A[j]) {
            B[k] = A[i];
            i++;
            k++;
        } else {
            B[k] = A[j];
            j++;
            k++;
        }
    }
    while (i <= mid) {
        B[k] = A[i];
        k++;
        i++;
    }
    while (j <= high) {
        B[k] = A[j];
        k++;
        j++;
    }
    for (i = low; i <= high; i++) {
        A[i] = B[i];
    }
}

void mergeSort(int A[], int low, int high)
{
    int mid;
    if(low<high) {
        mid = (low + high) /2;
        mergeSort(A, low, mid);
        mergeSort(A, mid+1, high);
        merge(A, mid, low, high);
    }
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

    mergeSort(arrayMain, 0, arraySize);

    printf("After sorting array elements are\n");

    for(i=0; i<arraySize; i++) {
        printf("%d ",arrayMain[i]);
    }

    return 0;
}

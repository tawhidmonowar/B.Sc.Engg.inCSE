#include<stdio.h>

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

    for(i=0; i<=arraySize-1; i++) {

        for(j=i; j>0&& arrayMain[j-1]> arrayMain[j]; j--) {

            temp  = arrayMain[j];
            arrayMain[j] = arrayMain[j-1];
            arrayMain[j-1] = temp;
        }
    }

    printf("After sorting array elements are\n");

    for(i=0; i<arraySize; i++) {
        printf("%d ",arrayMain[i]);
    }

    return 0;
}

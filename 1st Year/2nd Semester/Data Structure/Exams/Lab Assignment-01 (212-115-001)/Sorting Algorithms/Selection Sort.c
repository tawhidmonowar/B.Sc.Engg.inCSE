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

    for(i=0; i<arraySize-1; i++) {
        position = i;

        for(j=i+1; j<arraySize; j++) {
            if(arrayMain[j]<arrayMain[position]) {
                position = j;
            }
        }

        temp  = arrayMain[position];
        arrayMain[position]=arrayMain[i];
        arrayMain[i] = temp;

    }

    printf("After sorting array elements are\n");

    for(i=0; i<arraySize; i++) {
        printf("%d ",arrayMain[i]);
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int i,arraySize,key,mid,first,last;

    printf("Enter the size of array\n");
    scanf("%d",&arraySize);
    int mainArray[arraySize];
    printf("Enter the sorted array\n");

    for(i=0; i<arraySize; i++) {
        scanf("%d",&mainArray[i]);
    }

    printf("Enter the number which you want to search\n");
    scanf("%d",&key);

    first = 0;
    last = arraySize-1;
    mid = (first+last)/2;

    while(first <= last)
    {
        if(mainArray[mid]==key)
        {
            printf("The index of %d is %d",key,mid);
            break;
        }else if(key>mainArray[mid])
        {
            first = mid+1;
            mid = (first+last)/2;
        }else
        {
            last = mid-1;
            mid = (first+last)/2;
        }
    }

    if(first>last)
    {
        printf("Not found! %d isn't present in the list.\n", key);
    }

    return 0;
}



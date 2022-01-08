#include <stdio.h>

int main()
{
    int i,arraySize,key;

    printf("Enter the size of array\n");
    scanf("%d",&arraySize);
    int mainArray[arraySize];
    printf("Enter the elements of the array\n");

    for(i=0;i<arraySize;i++)
    {
        scanf("%d",&mainArray[i]);
    }

    printf("Enter the number which you want to search\n");
    scanf("%d",&key);

    for(i=0;mainArray[i]!='\0';i++)
    {
        if(mainArray[i]==key)
        {
            printf("The index of %d is %d",key,i);
            break;
        }
    }

    return 0;
}

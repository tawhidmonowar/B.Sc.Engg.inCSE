#include <stdio.h>
#define SIZE 10
int main()
{
    int aMatrix[SIZE][SIZE], bMatrix[SIZE][SIZE];
    int amRow,amCol,bmRow,bmCol;
    int i,j;

    printf("Enter The Number of Rows and columns for A Matrix\n");
    scanf("%d%d",&amRow,&amCol);
    printf("Enter The Number of Rows and columns for B Matrix\n");
    scanf("%d%d",&bmRow,&bmCol);

        printf("Enter The Value of A matrix\n"); //A Matrix er value input

        for (i=0;i<amRow;i++)
        {
            for (j=0;j<amCol;j++)
            {
            scanf("%d",&aMatrix[i][j]);
            }
        }


    printf("Enter The Value of B matrix\n"); //B Matrix er value input
        for (i=0;i<bmRow;i++)
        {
            for (j=0;j<bmCol;j++)
            {
                scanf("%d",&bMatrix[i][j]);
            }
        }


    printf("Result: \n"); //Result mMatrix print

    for (i=0;i<amRow;i++)
        {
          for (j=0;j<bmCol;j++)
          {
              printf("%d\t", aMatrix[i][j]+bMatrix[i][j]);
          }
          printf("\n");
        }

    return 0;
}
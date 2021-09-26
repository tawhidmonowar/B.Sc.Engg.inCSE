#include <stdio.h>
#define SIZE 10 // Array er size difine korsi
int main()
{
    int aMatrix[SIZE][SIZE], bMatrix[SIZE][SIZE], mMatrix[SIZE][SIZE];
    int amRow,amCol,bmRow,bmCol;
    int i,j,k,sum = 0;

    printf("Enter The Number of Rows and columns for A Matrix\n");
    scanf("%d%d",&amRow,&amCol);
    printf("Enter The Number of Rows and columns for B Matrix\n");
    scanf("%d%d",&bmRow,&bmCol);

    if (amCol!= bmRow) //A Matrix er colum and B Matrix er Row same kina check
    {
        printf("Can't be multiplied with each other.\n");
        exit(0); //Program taki exit niser program ar run hobe na
    }else
    {
        printf("Enter The Value of A matrix\n"); //A Matrix er value input

        for (i=0;i<amRow;i++)
        {
            for (j=0;j<amCol;j++)
            {
            scanf("%d",&aMatrix[i][j]);
            }
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

    for (i=0;i<amRow;i++)
    {
        for (j=0;j<bmCol;j++)
          {
            for (k=0;k<bmRow;k++)
            {
              sum = sum + aMatrix[i][k]*bMatrix[k][j];
              //A Matrix er row er sate B Matrix a col gun kore jug
            }
            mMatrix[i][j] = sum;
            sum = 0;
          }
    }

    printf("Result: \n"); //Result mMatrix print

    for (i=0;i<amRow;i++)
        {
          for (j=0;j<bmCol;j++)
          {
              printf("%d\t", mMatrix[i][j]);
          }
          printf("\n");
        }

    return 0;
}
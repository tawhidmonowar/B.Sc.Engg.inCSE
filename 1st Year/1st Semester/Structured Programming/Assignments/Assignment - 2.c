#include <stdio.h>
int main()
{
    int i,j;
    printf("Enter any Prime Number Between 1-10 To Start The Program: ");
    scanf("%d",&i);

    if((i==2)||(i==3)||(i==5)||(i==7))
    {
        printf("\nPress 1 For Convert Mark to Grade");
        printf("\nPress 2 For Calculator\n");
        printf("\nEnter The Number: ");

        scanf("%d",&j);
        {
            if(j==1)
            {
                MarkToGrade();
            }else if(j==2)
            {
                Calculator();
            }else
            {
                printf("You Entered a Wrong Number.");
            }
        }
    }else
    {
        printf("Sorry %d is not a Prime Number.\n",i);
    }
    
    return 0;
}


MarkToGrade()
{
    int a;

    printf("Enter Your Mark: ");
    scanf("%d",&a);

    if((a>=80)&&(a<=100))
    {
        printf("Congratulations! You Got A+\n");
    }else if (a>100)
    {
        printf("You Entered a Wrong Number\n");
    }else if ((a>=70)&&(a<80))
    {
        printf("Congratulations! You Got A\n");
    }else if ((a>=60)&&(a<70))
    {
        printf("Congratulations! You Got A-\n");
    }else if ((a>=50)&&(a<60))
    {
        printf("Congratulations! You Got B\n");
    } else
    {
        printf("Sorry! You Faield in The Exam\n");
    }
}


Calculator()
{
    int n,x,y,z;
    float d;

    printf("\nThis is Simple Console Calculator, Author: Tawhid Monowar\n");
    printf("\nPress 1 for Summation.\nPress 2 for Subtraction.\nPress 3 for Multiplication.\nPress 4 for Division.\n\nEnter The Number: ");
    scanf("%d",&x);

    if(x==1)
    {
        printf("Enter The First Number: ");
        scanf("%d",&y);
        printf("Enter The Second Number: ");
        scanf("%d",&z);
        n = y+z;
        printf("The Answer is: %d\n", n);

    } else if (x==2)
    {
        printf("Enter The First Number: ");
        scanf("%d",&y);
        printf("Enter The Second Number: ");
        scanf("%d",&z);
        n = y-z;
        printf("The Answer is: %d\n", n);

    } else if (x==3)
    {
        printf("Enter The First Number: ");
        scanf("%d",&y);
        printf("Enter The Second Number: ");
        scanf("%d",&z);
        n = y*z;
        printf("The Answer is: %d\n", n);

    } else if (x==4)
    {
        printf("Enter The First Number: ");
        scanf("%d",&y);
        printf("Enter The Second Number: ");
        scanf("%d",&z);
        d = (float)y/z;
        printf("The Answer is: %.5f\n", d);

    } else
    {
        printf("You Entered a Wrong Number! Try Again");
    }
}

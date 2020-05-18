#include<stdio.h>

main()
{
    int marks;

    printf("Enter Marks");
    scanf("%d",&marks);

    if(marks>=0&&marks<=100)
    {

        if(marks>=80)
        {
            printf("Grade A");
        }

        else if (marks>=50)
        {
            printf("Grade B");
        }

        else if (marks>=35)
        {
            printf("Grade C");
        }

        else
        {
            printf("Fail");
        }

    }

        else

        {
                printf("Enter valid Value");

        }



}



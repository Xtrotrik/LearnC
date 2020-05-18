
#include<stdio.h>

main()
{
    int n;

    printf("Enter N");
    scanf("%d",&n);

    if(n>=0&&n<=100)
    {

        if(n%2==0)

        {
            printf("The value is Even");
            if(n!=6)
            {
                printf("The value is not six");
            }
            else{
                printf("The value is six");
            }
        }

        else

        {

            printf("The value is ODD");

        }

    }

    else

    {

        printf("Wrong Number");

    }


}



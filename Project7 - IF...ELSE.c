#include<stdio.h>

main()
{
    int a;

    printf("Enter A");
    scanf("%d",&a);

    if(a>0)
    {
        printf("A is Postive");
    }

    else if (a<0)
    {
        printf("A is Negative");
    }

    else
    {
        printf("A is 0");
    }
}


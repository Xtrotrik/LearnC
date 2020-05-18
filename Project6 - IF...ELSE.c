#include<stdio.h>

main()
{
    int a,b;

    printf("Enter A");
    scanf("%d",&a);

    printf("Enter B");
    scanf("%d",&b);

    if(a>b)
    {
        printf("A is greater then B");
    }

    else if (a<b)
    {
        printf("B is greater then A");
    }

    else
    {
        printf("A is Equal to B");
    }
}

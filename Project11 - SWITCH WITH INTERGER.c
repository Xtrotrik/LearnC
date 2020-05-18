#include<stdio.h>
main()
{
    int a,b,c;

    printf("Enter C");
    scanf("%d",&c);

    switch(c)

    {
        case 1:
        printf("Enter A \n");
        scanf("%d",&a);
        printf("Enter B \n");
        scanf("%d",&b);
        printf("Add two value \n");
        a+b;
        printf("Sum is %d",a+b);
        break;

        case 2:
        printf("Sub two value \n");
        printf("Enter A \n");
        scanf("%d",&a);
        printf("Enter B \n");
        scanf("%d",&b);
        a-b;
        printf("Sub is %d",a-b);
        break;

        default:
        printf("No task Performed");


    }



}

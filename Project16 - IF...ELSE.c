
#include<stdio.h>

main()
{

    int a,b,c;
    char op;

    printf("Enter A and B");
    scanf("%d %d",&a,&b);
    fflush(stdin);
    printf("Enter your operation :");
    scanf("%c",&op);

    if(op=='+')
    {
        printf("Addition is %d",a+b);
    }


    else if (op=='-')
    {
        printf("Addition is %d",a-b);
    }

    else
    {
        printf("invalid");
    }


}

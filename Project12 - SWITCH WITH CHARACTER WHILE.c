#include<stdio.h>

main()
{

    int a,b,q=1;
    char op;

    while(q==1)
    {
        printf("Enter A\n");
        scanf("%d",&a);
        fflush(stdin);
        printf("Enter Opearation: \n");
        scanf("%c",&op);
        printf("Enter B\n");
        scanf("%d",&b);



        switch(op)
        {
        case '+':
            a+b;
            printf("ANSWER IS:%d \n",a+b);
            break;

        case '-':
            a-b;
            printf("ANSWER IS:%d \n",a-b);
            break;

        default:
            printf("Retry\n");

        }
        printf("Press 1 to continue:\n");
        scanf("%d",&q);
    }
}

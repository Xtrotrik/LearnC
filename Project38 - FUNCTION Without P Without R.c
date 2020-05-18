#include<stdio.h>

void cal()
{
    int a,b;
    char opr;
    printf("Enter A and B \n ");
    scanf("%d %d",&a,&b);
    printf("Enter OPR \n");
    fflush(stdin);
    scanf("%c",&opr);
   switch(opr)
    {

        case '+':
        printf("%d",a+b);

        case '-':
        printf("%d",a-b);

    }
}

main()
{
 cal();
}

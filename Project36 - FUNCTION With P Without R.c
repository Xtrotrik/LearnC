#include<stdio.h>

void calculator (int x,int y,char op)
{
switch(op)
        {
        case '+':
            printf("ANSWER IS:%d \n",x+y);
            break;

        case '-':
            printf("ANSWER IS:%d \n",x-y);
            break;

        default:
            printf("Invaild");

        }

}
main()
{
    int a,b;
    char opr;
    printf("Enter A and B \n ");
    scanf("%d %d",&a,&b);
    printf("Enter OPR \n");
    fflush(stdin);
    scanf("%c",&opr);

    calculator(a,b,opr);
}

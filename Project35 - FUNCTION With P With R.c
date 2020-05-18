#include<stdio.h>


int operation(int x,int y,char z)
{
    switch(z)
    {

        case '+':
        return x+y;

        case '-':
        return x-y;

    }

}

main()
{
int a,b,c;
    char opr;
    printf("Enter A and B \n ");
    scanf("%d %d",&a,&b);
    printf("Enter OPR \n");
    fflush(stdin);
    scanf("%c",&opr);
    c=operation(a,b,opr);
    printf("%d",c);

}


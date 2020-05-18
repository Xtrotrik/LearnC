#include<stdio.h>

void addition(int x,int y)
{
    printf("Answer is %d",x+y);
}

main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    addition(a,b);
}


#include<stdio.h>

int addition(int x,int y)
{
    return x+y;
}

main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=addition(a,b);
    printf("Answer %d",c);

}


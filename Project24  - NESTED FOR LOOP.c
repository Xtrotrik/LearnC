#include<stdio.h>

main()

{

    int i,j,k,n=5,a,b,c,d=5;

    for(i=1;i<=5;i++)
    {
        for(k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("  %d",j);
        }

        printf("\n");
    }

     for(a=5;a>=1;a--)
    {
        for(c=1;c<=d-a;c++)
        {
            printf(" ");
        }
        for(b=1;b<=a;b++)
        {
            printf("  %d",b);
        }

        printf("\n");
    }



}

#include<stdio.h>


main()

{
    int i,j,k,n=5;

    for(i=5; i>=1; i--)
    {
        for(k=1; k<=n-i; k++)
        {
            printf(" ");
        }
        for(j=i; j>=1; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }


}


#include<stdio.h>

main()
{

    int i,j,n,k;

    printf("Enter N and K \n");
    scanf("%d %d",&n,&k);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=k;j++)
        {
            printf("%d %d\n",i,j);
        }
        printf("\n");
    }
}

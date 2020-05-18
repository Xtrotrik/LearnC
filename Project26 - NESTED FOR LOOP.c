#include<stdio.h>

main()

{
    int i,j;

    for(i=0;i<=5;i++)
    {
        if(i==3)
        {
            continue;
        }

        for(j=1;j<=i;j++)
        {
             if(j==2||j==4)
            {
             continue;
            }

            printf("%d",j);
        }
        printf("%\n");
    }
}

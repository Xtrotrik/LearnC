#include<stdio.h>

main()

{
    int i,j;

    for(i=0;i<=5;i++)
    {
        if(i==1)
        {
            continue;
        }
        if(i==3)
        {
            break;
        }

        for(j=0;j<=2;j++)

         {
              printf("%d %d \n",i,j);

         }


    }
}

#include<stdio.h>

void marks()
{
    int marks[3][3],i,j,t,a,q=0;

    while(q==0)
    {
        for(i=0; i<3; i++)
        {
            t=0;

            for(j=0; j<3; j++)
            {

                printf("Enter J\n");
                scanf("%d",&marks[i][j]);
                t+=marks[i][j];
            }
            printf("TOTAL %d\n",t);
            a=t/3;
            printf("AVG %d\n",a);

            if(a>=80)
            {
                printf("A");
            }
            else if(a>=50)
            {
                printf("B");
            }
            else
            {
                printf("c");
            }

        }
         printf("press 0 to continue");
    scanf("%d",&q);
    }

}

main()
{
    marks();
}

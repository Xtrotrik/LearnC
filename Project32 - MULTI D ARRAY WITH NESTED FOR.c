#include<stdio.h>

main()


{

    int marks[3][5],i,j,t;
    float a;
    for(i=0;i<3;i++)
    {
        t=0;
        a=0;
        for(j=0;j<5;j++)
        {
           printf("Enter Marks %d\n",j);
            scanf("%d",&marks[i][j]);
            t+=marks[i][j];
        }

    printf("%d \n",t);

    a=t/5.0;
    printf("Avg %f\n",a);
    }

}

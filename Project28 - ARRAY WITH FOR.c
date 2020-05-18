
#include<stdio.h>

main()
{
    int i,marks[5],a=0,t=0;

    for(i=0;i<5;i++)
    {
        printf("Enter Value\n");
        scanf("%d",&marks[i]);
        t+=marks[i];
    }
    printf("total=%d\n",t);

    a=t/5;

    printf(" Avrg=%d \n",a);

    if(a>=80)
    {
        printf("grade 1");
    }
    else if (a>=50)
    {
        printf("grade 2");
    }
    else
    {
        printf("fail");
    }

}

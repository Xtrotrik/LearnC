#include<stdio.h>

main()
{
    int  i,a[5],b[5],c[5];

    for(i=0;i<=4;i++)
    {
     printf("Enter A");
     scanf("%d\n",&a[i]);
    }
    for(i=0;i<=4;i++)
    {
     printf("Enter B");
     scanf("%d\n",&b[i]);
    }
    for(i=0;i<=4;i++)
    {
        printf("%d + %d = %d \n",a[i],b[i],a[i]+b[i]);
    }

}

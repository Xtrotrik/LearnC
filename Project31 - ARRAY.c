#include<stdio.h>

main()
{
    int i,a[5];

    for(i=0;i<=4;i++)
    {
        printf("Enter A:\n");
        scanf("%d",&a[i]);

        if(a[i]%2==0)
        {
            printf("VALUE IS Even\n");
        }
        else
        {
            printf("VALUE IS Odd\n");
        }
    }


}

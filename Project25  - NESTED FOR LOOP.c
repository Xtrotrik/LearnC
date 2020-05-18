#include<stdio.h>

main()

{

    int a,b,c,d=5;
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

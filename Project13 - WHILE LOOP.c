
#include<stdio.h>

main()
{

    int P=1000,C=1000,M=1000,T,A,q=1;
    while(q==1)
    {
        P=1000,C=1000,M=1000,T,A;

        while(P<0||P>100)
        {

            printf("Enter P");
            scanf("%d",&P);

        }

        while(C<0||C>100)
        {

            printf("Enter C");
            scanf("%d",&C);

        }

        while(M<0||M>100)
        {

            printf("Enter M");
            scanf("%d",&M);

        }
        T=P+C+M;
        printf("Total is %d \n",T);

        A=T/3;
        printf("Avg is %d \n",A);

        if(A>80)
        {
            printf("grade A\n");
        }
        else if (A>50)
        {
            printf("grade B\n");
        }
        else
        {
            printf("grade C\n");
        }



        printf("press 1 to continue\n");
        scanf("%d",&q);


    }

}


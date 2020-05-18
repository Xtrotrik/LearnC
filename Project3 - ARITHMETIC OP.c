#include<stdio.h>

main()

{

    int answer1,a,b;
    float A4,p,q;

    printf("ADD\n");

    printf("ENTER A\n");

    scanf("%d",&a);

    printf("ENTER B\n");

    scanf("%d",&b);

    answer1=a+b;

    printf("Addition=%d\n",answer1);

    /*##################################### */

    printf("Sub\n");

    printf("ENTER A\n");

    scanf("%d",&a);

    printf("ENTER B\n");

    scanf("%d",&b);

    answer1=a-b;

    printf("Sub=%d\n",answer1);

    /*##################################### */



    printf("Divi IN INT\n");

    printf("ENTER A\n");

    scanf("%d",&a);

    printf("ENTER B\n");

    scanf("%d",&b);

    answer1=a/b;

    printf("Divi=%d\n",answer1);

    /* ############################ */


    printf("DIVI IN FLOAT \n");

    printf("ENTER P\n");

    scanf("%f",&p);

    printf("ENTER Q\n");

    scanf("%f",&q);

    A4=p/q;

    printf("DIVI=%f\n",A4);


    /* ############################ */


    printf("MOD\n");

    printf("ENTER A\n");

    scanf("%d",&a);

    printf("ENTER B\n");

    scanf("%d",&b);

    answer1=a%b;

    printf("MOD=%d\n",answer1);

}

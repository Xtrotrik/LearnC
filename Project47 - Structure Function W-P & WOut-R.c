#include<stdio.h>
#include<string.h>

struct emp
{
    char name[10],jobN[10];
    int a;
    float s;
};

void entry (struct emp e[])
{
    int i;
    for(i=0; i<3; i++)
    {
        printf("Enter name \n");
        fflush(stdin);
        gets(e[i].name);
        printf("Enter job \n");
        fflush(stdin);
        gets(e[i].jobN);
        printf("Enter age \n");
        scanf("%d",&e[i].a);
        printf("Enter Salary \n");
        scanf("%f",&e[i].s);
    }
}

void result (struct emp e[])
{
    for(int i=0; i<3; i++)
    {
    printf("NAME %s,job %s,age  %d,Salary %f \n",e[i].name,e[i].jobN,e[i].a,e[i].s);

    }
}

main()
{
    struct emp e[3];
    entry(e);
    result(e);
}

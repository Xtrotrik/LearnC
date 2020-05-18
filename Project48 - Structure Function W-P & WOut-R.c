#include<stdio.h>
#include<string.h>

struct person
{
    int id,age;
    float salary;
    char name[8];
};

void st (struct person p[])
{
    int i;
    for(i=0; i<3; i++)
    {
        fflush(stdin);

        printf("NAME :\n");
        gets(p[i].name);

        printf("id");
        scanf("%d",&p[i].id);

        printf("age");
        scanf("%d",&p[i].age);

        printf("SALARY");
        scanf("%f",&p[i].salary);
    }
}

void result(struct person p[])
{
    for(int i=0; i<3; i++)
{
    printf("Name %s id %d age %d salary %f \n",p[i].name,p[i].id,p[i].age,p[i].salary);
}

}


main()
{
    struct person p[3];
    st (p);
    result(p);

}



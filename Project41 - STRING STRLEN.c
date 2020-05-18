#include<stdio.h>
#include<string.h>
void Rname()
{
char name[10],f,r;
int l,i;

gets(name);

l=strlen(name);
printf("Length is %d",l);

    printf("Find");
    fflush(stdin);
    scanf("%c",&f);

    printf("Replace");
    fflush(stdin);
    scanf("%c",&r);

    for(i=0; i<l; i++)
    {
        if(name[i]==f)
        {
            name[i]=r;
        }
        printf("%c",name[i]);
    }
}

main()
{
    Rname();
}



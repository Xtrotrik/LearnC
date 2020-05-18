#include<stdio.h>

void fr()
{
    char name[10],f,r;
    int l=0,i;
    printf("ENTER NAME");
    gets(name);

    while(name[l]!='\0')
    {
        l++;
    }

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
    fr();
}



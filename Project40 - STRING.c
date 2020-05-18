#include<stdio.h>

main()
{
    int i,l=0,c=0;
    char name[10];
    printf("STRING :\n ");
    gets(name);
    printf("%s",name);

    while(name[l]!='\0')
    {
        l++;
    }

    for(i=0;i<l;i++)
    {
        if(name[i]=='A'|| name[i]=='a')
        {
            c++;
        }
    }
    printf("%d \n",c);
}

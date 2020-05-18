#include<stdio.h>
#include<string.h>
void Rname()
{
char name[10];
int l;

gets(name);

l=strlen(name);
printf("Length is %d",l);
}

main()
{
    Rname();
}

#include<stdio.h>
#include<string.h>
void Rname()
{
char name[10],name2[20];
int l;

gets(name);

l=strlen(name);
printf("Length is %d\n",l);

strcpy(name2,name);
puts(name2);
}

main()
{
    Rname();
}

#include<stdio.h>
#include<string.h>
int main()
{
    char *str;
    str ="GFG";
    *(str+1) ='n';
    getchar();
    return 0;
}
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int size=4;
    char *str =(char *)malloc(sizeof(char)*size);
    *(str+0)='G';
    *(str+1)='F';
    *(str+2)='G';
    *(str+3)='\0';
    *(str+1)='n';
    getchar();
    return 0;
}
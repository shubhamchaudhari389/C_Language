#include<stdio.h>
#include<string.h>

int main()
{
    //declare and initialize string 
    char str[] ="Geeks";

    //print string 

    printf("%s\n",str);

    int length =0;
    length =strlen(str);

    //Display of length of the String

    printf("Length of string str is %d", length);

    return 0;
}
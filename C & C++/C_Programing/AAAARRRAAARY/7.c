#include<stdio.h>
int main(){
    char str[20] ="GeeksForGeeks";

    char *ptr =str;

    while(*ptr !='\0'){
        printf("%c",*ptr);

        ptr++;
    }
}
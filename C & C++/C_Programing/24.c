#include<stdio.h>
int main()
{
    int x=5;
    while(x++<=7);
    printf("%d\n",x);
    printf("%d",x++);
    return 0;

}
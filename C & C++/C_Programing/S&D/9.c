#include<stdio.h>
int main()
{
    static int var=3;
    if(var--)
    {
         main();
        printf("var=%d\n",var);
        

    }
    return 0;
}
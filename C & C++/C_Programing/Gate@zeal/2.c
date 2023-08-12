#include<stdio.h>
int main(void)
{
    int a=0;
        for(int b=0;(b<8);++b)
        {
            
            if((b%2)==0){continue;}
            if(a==1){continue;}
            printf("%d%d\n",a,b);
        }
        a++;
}
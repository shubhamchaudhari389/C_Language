#include<stdio.h>
void D();
void C();
void B();
int a;
int main()
{
    int a=10;
    B();
    return 0;
}
void B()
{
    int a=20;
    C();
}
void C()
{
    int a=30;
    D();
}
void D()
{
    printf("a=%d",a);
}
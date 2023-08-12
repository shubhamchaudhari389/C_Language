#include<stdio.h>
void D();
void C();
void B();
int a=5;
int main()
{
    int a=10;
    B();
    return 0;
}
void B()
{
    int a=20;
    printf("a=%d",a);
    C();
}
void C()
{
    int a=30;
    D();
    printf("a=%d",a);
}
void D()
{

    printf("a=%d",a);
}
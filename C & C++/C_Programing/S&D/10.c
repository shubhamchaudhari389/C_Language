#include<stdio.h>
#include<conio.h>
int a,b,c;
void func1()
{
    int a,b;
    a=6;
    b=8;
    func2();
    a=a+b+c;
    printf(a);
}

void func2(){
    int b,c;
    b=4;
    c=a+b;
    a+=11;
    printf(c);
}

void main(){
    a=3;
    b=5;
    c=7;
    func1();
}
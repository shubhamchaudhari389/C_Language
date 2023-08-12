#include<stdio.h>
void function(){
    int x=20;
    static int y=30;
    x=x+10;
    y=y+10;

    printf("\n%d,%d",x,y);
}
int main(){
    function();
    function();
    function();
return 0;
}
//what wiil bee output of give C code
#include<stdio.h>
int main()
{
    int i=5;
    int j=i/-3;
    int k=j%-4;
    int L=i%-2;
    printf("%d%d%d",j,k,L);
    if((k<1)&&(L<1)||(j<1))
    printf("%d",k++);
    else
    printf("%d",++L);
    return 0;
}
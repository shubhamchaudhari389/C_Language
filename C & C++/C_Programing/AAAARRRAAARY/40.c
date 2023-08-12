//Array name gives address of first element of array.

#include<stdio.h>
int main()
{
    int arr[]={10,20,30,40,50,60};
    int* ptr =arr;
    printf("value of first element is %d",*ptr);
    return 0;
}
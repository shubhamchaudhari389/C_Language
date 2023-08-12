#include<stdio.h>
#include<string.h>
int main()
{
    int arr[]={10,20,30,40,50,60,70,80};
    int *ptr= arr;
    printf("size of arr[]%ld\n",sizeof(arr));
    printf("size of ptr %ld", sizeof(ptr));
    return 0;

}
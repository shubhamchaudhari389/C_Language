#include<stdio.h>
void fun(int arr[],size_t arr_size)
{
    int i;
    for(i=0;i<arr_size;i++) {
        arr[i] =i;
    }
}
int main()
{
    int i;
    int arr[] ={0,0,0,0,0};
    size_t n=(&arr)[1] -arr;
    fun(arr,n);
    printf("the size of array is :%ld",n);
    printf("\n the elements are:\n");
    for(i=0;i<n;i++)
        printf("%d",arr[i]);

    return 0;
}
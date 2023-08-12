#include<stdio.h>
void fun(int arr[])
{
    int i;
    int arr_size=sizeof(arr)/sizeof(arr[0]);
    for (i=0;i<arr_size;i++){
        arr[i]=i;
    }
}
int main()
{
    int i;
    int arr[4]={0,0,0,0};
    fun(arr);

    for (i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
         printf("%d", arr[i]);

    getchar();
    return 0;
}
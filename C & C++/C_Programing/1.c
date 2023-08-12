#include<stdio.h>
int main()
{
    int n;
    
    int arr[] = { 2, 3, 4,5,6,7};

    n = sizeof(arr) / sizeof(arr[0]);
     printf("%d,%d,%d",n,sizeof(arr),sizeof(arr[0]));
    return 0;
}
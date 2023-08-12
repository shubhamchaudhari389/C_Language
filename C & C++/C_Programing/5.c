//Linear_Search

#include<stdio.h>
int search(int arr[],int n,int key)
{
    int i=0;
    for( i=0;i<n;i++)
    if(arr[i]==key)
    return 1;

return 0;
}
int main()
{
    int arr[]={10,20,30,40,50};
    int key=50;
    int n = sizeof(arr)/sizeof(arr[0]);

    if(search(arr,n,key)==1)
    printf("Search_Found");
    else
    printf("Search_Not_Found");
}
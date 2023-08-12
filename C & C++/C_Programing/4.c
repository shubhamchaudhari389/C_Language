#include<stdio.h>

int search(int arr[], int n,int Key)
{
    int i;
    for(i=0;i<n;i++)
    if(arr[i]==Key)
    return 1;

return 0;
}
int main(void)
{
    int arr[]={86,91,34,50,0};
    int Key=50;
    int n = sizeof(arr)/sizeof(arr[0]);
   


    int result = search(arr, n, Key);
    
    if(result==1)
      printf("SearchFound");
    else
      printf("SearchNotFound");
    return 0;
}
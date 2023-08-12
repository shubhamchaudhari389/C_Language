#include<limits.h>
#include<stdio.h>
int main(){
    int arr[]={0,1};
    printf("minimum int value=%d\n"
    "maximum int value=%d\n"
    "size of int in byte=%d\n"
    "size of int in bits=%d\n,size of array=%d",INT_MIN,INT_MAX,sizeof(int),sizeof(int)*CHAR_BIT,sizeof(arr[0]));
}
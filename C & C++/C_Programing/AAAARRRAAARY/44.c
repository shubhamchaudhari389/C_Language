//2) Using an array of pointers


#include<stdio.h>
#include<stdlib.h>
int main()
{
    int r=3,c=4,i,j, count;
    
    int* arr[r];
    for(i=0;i<r;i++)
       arr[i]=(int*)malloc(c*sizeof(int));
    
    //note that arr[i][j] is same as of *(*(arr+i)+j)
    count =0;
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
           arr[i][j] =++count;

    for (i=0;i<r;i++)
        for(j=0;j<c;j++)
            printf("%d",arr[i][j]);
    for (int i=0;i<r;i++)
        free(arr[i]);
    return 0;
}
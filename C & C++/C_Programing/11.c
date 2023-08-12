/* structure is used to return two values from minMax() */
//Linear Search
#include<stdio.h>
struct pair
{
  int min;
  int max;
}; 
 
struct pair getMinMax(int arr[], int n)
{
  struct pair minmax;    
  int i;
   
  minmax.max=minmax.min=arr[1];
 
  for (i = 2; i<n; i++)
  {
    if (arr[i] >  minmax.max)     
      minmax.max = arr[i];
   
    else if (arr[i] <  minmax.min)     
      minmax.min = arr[i];
  }
   
  return minmax;
}
 
/* Driver program to test above function */
int main()
{
  int arr[] = {1000, 11, 445, 1, 330, 3000};
  int arr_size = 6;
  struct pair minmax = getMinMax (arr, arr_size);
  printf("nMinimum element is %d", minmax.min);

  printf("nMaximum element is %d", minmax.max);
  getchar();
} 
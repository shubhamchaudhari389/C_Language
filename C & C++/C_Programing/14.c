#include<stdio.h>

/* structure is used to return two values from minMax() */
struct pair
{
int min;
int max;
};

struct pair getMinMax(int arr[], int n)
{
struct pair minmax;	
int i;

/* If array has even number of elements then
	initialize the first two elements as minimum and
	maximum */
if (n%2 == 0)
{		
	if (arr[0] > arr[1])	
	{
	minmax.max = arr[0];
	minmax.min = arr[1];
	}
	else
	{
	minmax.min = arr[0];
	minmax.max = arr[1];
	}
	i = 2; /* set the starting index for loop */
}

/* If array has odd number of elements then
	initialize the first element as minimum and
	maximum */
else
{
	minmax.min = arr[0];
	minmax.max = arr[0];
	i = 1; /* set the starting index for loop */
}

/* In the while loop, pick elements in pair and
	compare the pair with max and min so far */
while (i < n-1)
{		
	if (arr[i] > arr[i+1])		
	{
	if(arr[i] > minmax.max)	
		minmax.max = arr[i];
	if(arr[i+1] < minmax.min)		
		minmax.min = arr[i+1];	
	}
	else		
	{
	if (arr[i+1] > minmax.max)	
		minmax.max = arr[i+1];
	if (arr[i] < minmax.min)		
		minmax.min = arr[i];	
	}	
	i += 2; /* Increment the index by 2 as two
			elements are processed in loop */
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

//Divide and conquer power of N
#include<stdio.h>
int power(int x, unsigned int y)
{
    int temp;
    if (y==0)
       return 1;
    temp =power(x,y/2);
    if(y%2==0)
       return temp*temp;
    else
       return x*temp*temp;

}
int main()
{
    int x=2;
    unsigned int y=2;

    printf("%d",power(x,y));
    return 0;
}
//Time Complexity of optimized solution: O(log(n))
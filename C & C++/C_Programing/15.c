/*Below divides the problem into subproblems of size y/2 and call the subproblems recursively.*/
#include<stdio.h>
int power(int x,unsigned int y)
{
    if(y==0)
      return 1;
    else if(y%2==0)
           return power(x,y/2)*power(x,y/2);
    else   
           return x*power(x,y/2)*power(x,y/2);   
    
}

int main()
{
    int x=7;
    unsigned int y=2;

    printf("%d",power(x,y));
    return 0;
}
//Time Complexity: O(n) 
//Space Complexity: O(1) 
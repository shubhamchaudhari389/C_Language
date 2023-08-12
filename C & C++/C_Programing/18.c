#include<stdio.h>
int power(int x,int y)
{
    if(y==0)
       return 1;
    if(x==0)
       return 0;
    else 
       return x* power(x, y-1);

}
int main()
{
    int x=2;
    int y=3;
    printf("%d",power(x,y));
    return 0;
}
//Time Complexity: O(n)

//Auxiliary Space: O(n)
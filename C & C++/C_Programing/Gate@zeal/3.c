#include<stdio.h>
void main()
{
    int a;
    printf("Enter number between 1 to 3:");
    scanf("%d",&a);
    switch(a+1,a+2,a+3)
    {
        case 1: printf("1\n");
        break;
        case 2: printf("2\n");
        break;

        case 3:
        printf("3\n");
        default:
        
        printf("4");
        
        }
}
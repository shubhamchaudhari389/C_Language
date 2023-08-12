//Read n characters from the user using getchar() function

#include <stdio.h>  
#include <conio.h>  
#include <ctype.h>   
int main()    
{  
    char ch;   
    printf (" Enter a character ( If we want to exit press #) \n");  
    while (ch != '#') /* accept the number till the user does not enter the # to exit from the loop. */  
    {  
        ch = getchar();   
        printf (" \n We have entered the character : ");  
        putchar (ch); // print a single character  
        printf ("\n");  
        }     
        return 0;  
}  
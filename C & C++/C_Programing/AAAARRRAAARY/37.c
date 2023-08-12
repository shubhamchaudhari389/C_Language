#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *getString()
{
char str[] = "GfG"; /* Stored in stack segment */

/* Problem: string may not be present after getString() returns */
/* Problem can be solved if write static before char, i.e. static char str[] = "GfG";*/
return str;
}	
int main()
{
printf("%s", getString());
getchar();
return 0;
}

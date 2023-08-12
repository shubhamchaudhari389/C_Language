#include<stdio.h>
#include<string.h>
int main()
{
char str[] = "GfG"; /* Stored in stack segment like other auto variables */
*(str+1) = 'n'; /* No problem: String is now GnG */
getchar();
return 0;
}

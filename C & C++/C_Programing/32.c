# include <stdio.h>

int x = 2;
int f()
{
return x;
}
int g()
{
int x = 1;
return f();
}
int main()
{
printf("%d", g());
printf("\n");
getchar();
}

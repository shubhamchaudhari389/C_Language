#include <stdio.h>
int main()
{
	char *s = "geek";
	printf("%lu", sizeof(s));

	// Uncommenting below line would cause undefined behaviour
	// (Caused segmentation fault on gcc)
	// s[0] = 'j';
	return 0;
}

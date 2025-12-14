#include <stdio.h>

void swap(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

int main() 
{
	char d = 'a';
	char f = 'b';
	swap(&d, &f);
    printf("%c%c\n", d, f);
}
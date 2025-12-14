#include <unistd.h>
#include <stdio.h>

void rot(char *c)
{
	while(*c)
	{
		char new_c = *c;
		if(*c >= 'A' && *c <= 'Y' || *c >= 'a' && *c <= 'y')
		{
			new_c = *c + 1;
		}
		else if (*c == 'Z' || *c == 'z'){
			new_c = *c - 25;
		}
		else 
			new_c = 'a';
		write(1, &new_c, 1);
		c++;
	}
}

int main(int ac, char **av)
{
	if(ac == 2)
	{
		rot(av[1]);
	}
	write(1, "\n", 1);
	return (0);
}
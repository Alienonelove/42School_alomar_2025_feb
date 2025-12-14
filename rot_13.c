#include <unistd.h>
#include <stdio.h>

char rot_13(char c)
{
	int root;

	if('A' <= c && c <= 'M' || 'M' <= c && c <= 'Z')
	{
		c +=13;
	}
	else if('a' <= c && c <= 'm' || 'm' <= c && c <= 'z')
	{
		c +=13;
	}
	return (c);
}

int main(int ac, char **av)
{
	char c;

	if(ac == 2)
	{
		while(*av[1])
		{
			c = rot_13(*av[1]++);
			write(1, &c, 1);
		}
	}
	write(1, "\n", 1);
	return(0);
}
#include <unistd.h>

char	repeat(char c)
{
	int repet;

	if('A' <= c && c<= 'Z')
	{
		repet = c - 'A' + 1;
	}
	else if ('a' <= c && c <= 'z')
	{
		repet = c -'a' + 1;
	}
	else 
		repet = 1;

	return(repet);
}

int main (int ac, char **av)
{
	int repet;

	if(ac == 2)
	{
		while(*av[1])
		{
			repet = repeat(*av[1]);
			while(repet--)
			{
				write(1, av[1], 1);
			}
			av[1]++;
		}
	}
	write(1, "\n", 1);
}

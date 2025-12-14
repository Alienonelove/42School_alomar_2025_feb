#include <unistd.h>
#include <unistd.h>

char rev_print(char *c)
{
	int i = 0;
	while(c[i])
	{
		i++;	
	}
	return (i);
}


int main(int ac, char **av)
{
		if(ac == 2) 
		{
			int length = rev_print(av[1]);
			while(length--)
			{
				write(1, &av[1][length], 1);
			}
		}
		write(1, "\n", 1);
}
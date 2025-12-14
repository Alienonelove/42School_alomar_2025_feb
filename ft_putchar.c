#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, &*str, 1);
		str++;
	}
}

void	ft_puterror(void)
{
	ft_putstr("The passed arguments for the rush function are invalid!\n");
	ft_putstr("-------> We are very sorry (ｏ・_・)ノ”(ノ_<、) <-------\n");
}
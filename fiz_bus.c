#include <unistd.h>
#include <stdio.h>

void printt(int c)
{

    char nb;

	if(c > 9)
		printt(c/10);
	nb = (c % 10) + '0';
	write(1, &nb, 1);
}
int main (void)
{
	int i = 1;
	
	while(i <= 100)
	{
		if(i % 3 == 0)
		{
			write(1, "fizz", 4);
		}
		else if (i % 5 == 0)
		{
			write(1, "buzz", 4);
		}
		else if(i % 3 == 0 && i % 5 == 0){
			write(1, "fizzbuzz", 8);
		}
		else {
			printt(i);
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
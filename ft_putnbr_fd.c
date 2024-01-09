#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
	write(fd,&c,1);
}

void ft_putstr_fd(char *s, int fd)
{
	size_t i = 0;
	while (s[i] != '\0')
	{
		write(fd,&s[i],1);
		i++;
	}
}
void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = n * -1;
		}
		if (n >= 9)
		{
			ft_putnbr_fd(n / 10, fd);
		}
		ft_putchar_fd((n % 10) + '0', fd);
	}
}
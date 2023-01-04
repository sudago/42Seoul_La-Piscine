#include <unistd.h>

void	ft_make_and_write_hexa(unsigned char c)
{
	char	make_hexa[3];
	char	*hexadecimal;

	hexadecimal = "0123456789abcdef";
	make_hexa[0] = '\\';
	make_hexa[1] = hexadecimal[c / 16];
	make_hexa[2] = hexadecimal[c % 16];
	write(1, make_hexa, 3);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 31 && str[i] < 127)
			write(1, &str[i], 1);
		else
			ft_make_and_write_hexa((unsigned char)str[i]);
		i++;
	}
}

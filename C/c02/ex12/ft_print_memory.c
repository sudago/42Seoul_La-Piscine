#include <unistd.h>

void	ft_print(unsigned char *str, unsigned long long addr, unsigned int size);
void	ft_addr(unsigned long long addr, char *hexa_base);
void	ft_hexa(unsigned char *str, char *hexa_base, unsigned int size);
void	ft_printable(unsigned char *str, unsigned int size);

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned long long	long_addr;
	unsigned char		*str;
	unsigned int		i;

	i = 0;
	while (i * 16 < size)
	{
		str = ((unsigned char *)addr + i * 16);
		long_addr = ((unsigned long long)addr + i * 16);
		ft_print(str, long_addr, size);
		i++;
	}
	return (addr);
}

void	ft_print(unsigned char *str, unsigned long long addr, unsigned int size)
{
	char	*hexa_base;

	hexa_base = "0123456789abcdef";
	ft_addr(addr, hexa_base);
	write(1, ": ", 2);
	ft_hexa(str, hexa_base, size);
	ft_printable(str, size);
	write(1, "\n", 1);
}

void	ft_addr(unsigned long long addr, char *hexa_base)
{
	char	text[17];
	int		i;

	text[16] = '\0';
	i = 15;
	while (i > -1)
	{
		text[i] = hexa_base[addr % 16];
		addr /= 16;
		i--;
	}
	i = 0;
	while (text[i])
	{
		write(1, &text[i], 1);
		i++;
	}
}

void	ft_hexa(unsigned char *str, char *hexa_base, unsigned int size)
{
	unsigned int		i;
	unsigned int		len;
	char	buf[2];

	i = 0;
	while (str[i])
		i++;
	len = i;
	if (i % 2 == 1)
		len--;
	i = 0;
	while (i < 16 && i < size)
	{	
		if (i < len)
		{
			buf[0] = hexa_base[str[i] / 16];
			buf[1] = hexa_base[str[i] % 16];
			write(1, buf, 2);
		}
		else
			write(1, "  ", 2);
		if (i % 2 == 1)
			write(1, " ", 1);
		i++;
	}
	while (i < 16)
	{
		write(1, "  ", 2);
		if (i % 2 == 1)
			write(1, " ", 1);
		i++;
	}
}

void	ft_printable(unsigned char *str, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (str[i] && i < 16 && i < size)
	{
		if (str[i] < 32 || str[i] >= 127)
			write(1, ".", 1);
		else
			write(1, &str[i], 1);
		i++;
	}
}

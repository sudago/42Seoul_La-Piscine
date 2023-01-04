#include <unistd.h>

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr(long long nbr, char *base, int base_len)
{	
	if (nbr < 0)
	{
		write(1, "-", 1);
		ft_putnbr(nbr * -1, base, base_len);
	}
	else if (nbr > base_len - 1)
	{
		ft_putnbr(nbr / base_len, base, base_len);
		ft_putnbr(nbr % base_len, base, base_len);
	}
	else
		write(1, &base[nbr], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	base_len = ft_check_base(base);
	if (base_len <= 1)
		return ;
	ft_putnbr((long long)nbr, base, base_len);
}

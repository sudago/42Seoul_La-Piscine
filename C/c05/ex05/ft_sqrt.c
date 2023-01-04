int	ft_sqrt(int nb)
{
	int	base;

	base = 1;
	if (nb < 0)
		return (0);
	while (base <= nb / base)
	{
		if (base * base == nb)
			return (base);
		base++;
	}
	return (0);
}

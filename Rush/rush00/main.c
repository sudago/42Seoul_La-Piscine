void	rush(int a, int b);

int	ft_atoi(char *str)
{
	int	i;
	int	result;

	result = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	i = 0;
	while (str[i])
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	if (result <= 0)
		return (0);
	return (result);
}

int	main(int argc, char **argv)
{
	int	a;
	int	b;

	if (argc != 3)
		return (0);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[2]);
	if (a == 0 || b == 0)
		return (0);
	rush(a, b);
	return (0);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if ((base[i] == '+' || base[i] == '-')
			|| (base[i] >= 9 && base[i] <= 13) || base[i] == 32)
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

int	ft_check_str(char *str, int i, char *base, int base_len)
{
	int	result;
	int	j;

	result = 0;
	while (str[i])
	{
		j = 0;
		while (base[j])
		{
			if (str[i] == base[j])
			{
				result = result * base_len + j;
				break ;
			}
			j++;
		}
		if (j == base_len)
			return (result);
		i++;
	}
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	base_len;

	i = 0;
	sign = 1;
	base_len = ft_check_base(base);
	if (base_len <= 1)
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	return (ft_check_str(str, i, base, base_len) * sign);
}

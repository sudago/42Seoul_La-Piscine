char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (*to_find)
		return (&str[0]);
	i = 0;
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (to_find[j])
			{
				if (str[i + j] != to_find[j])
					break ;
				j++;
			}
			if (to_find[j])
				return (&str[i]);
		}
		i++;
	}
	return (0);
}

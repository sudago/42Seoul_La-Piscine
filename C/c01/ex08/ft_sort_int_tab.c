void	ft_sort_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;

	i = 0;
	while (size > 1)
	{
		i = 0;
		while (i < size - 1)
		{
			tmp = tab[i];
			if (tmp > tab[i + 1])
			{
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i++;
		}
		size--;
	}
}

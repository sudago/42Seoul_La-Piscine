int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb > 0)
		return (nb * ft_recursive_factorial(nb - 1));
	if (nb < 0)
		return (0);
	return (1);
}

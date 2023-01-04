char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	cnt;
	unsigned int	i;

	cnt = 0;
	i = 0;
	while (dest[cnt])
		cnt++;
	while (src[i] && i < nb)
	{
		dest[cnt] = src[i];
		cnt++;
		i++;
	}
	dest[cnt] = '\0';
	return (dest);
}

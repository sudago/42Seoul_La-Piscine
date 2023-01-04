char	*ft_strcat(char *dest, char *src)
{
	int	cnt;
	int	i;

	cnt = 0;
	i = 0;
	while (dest[cnt])
		cnt++;
	while (src[i])
	{
		dest[cnt] = src[i];
		cnt++;
		i++;
	}
	dest[cnt] = '\0';
	return (dest);
}

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort(int argc, char **argv)
{
	int		i;
	char	*tmp;

	while (argc > 2)
	{
		i = 1;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = tmp;
			}
			i++;
		}
		argc--;
	}
}

void	ft_print(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int		i;

	if (argc <= 1)
		return (0);
	ft_sort(argc, argv);
	i = 1;
	while (argv[i])
	{
		ft_print(argv[i]);
		i++;
	}
	return (0);
}

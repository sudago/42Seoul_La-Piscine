void	ft_putchar(char c);

void	first_line(int a)
{
	int	x;

	x = 1;
	ft_putchar('/');
	while (x < a - 1)
	{
		ft_putchar('*');
		x++;
	}
	if (a >= 2)
		ft_putchar('\\');
	ft_putchar('\n');
}

void	center_line(int a)
{
	int	x;

	x = 1;
	ft_putchar('*');
	while (x < a - 1)
	{
		ft_putchar(' ');
		x++;
	}
	if (a >= 2)
		ft_putchar('*');
	ft_putchar('\n');
}

void	last_line(int a)
{
	int	x;

	x = 1;
	ft_putchar('\\');
	while (x < a - 1)
	{
		ft_putchar('*');
		x++;
	}
	if (a >= 2)
		ft_putchar('/');
	ft_putchar('\n');
}

void	rush(int a, int b)
{
	int	y;

	y = 1;
	if (b == 0)
		return ;
	first_line(a);
	if (b >= 2)
	{
		while (y < b - 1)
		{
			center_line(a);
			y++;
		}
		last_line(a);
	}
}

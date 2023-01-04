#include <unistd.h>

void	ft_make_comb(char *arr)
{
	while (arr[0] <= '7')
	{
		arr[1] = arr[0] + 1;
		while (arr[1] <= '8')
		{
			arr[2] = arr[1] + 1;
			while (arr[2] <= '9')
			{
				write (1, arr, 3);
				if (arr[0] != '7' || arr[1] != '8' || arr[2] != '9')
					write (1, ", ", 2);
				arr[2]++;
			}
			arr[1]++;
		}
		arr[0]++;
	}
}

void	ft_print_comb(void)
{
	char	arr[3];

	arr[0] = '0';
	arr[1] = '0';
	arr[2] = '0';
	ft_make_comb(arr);
	return ;
}

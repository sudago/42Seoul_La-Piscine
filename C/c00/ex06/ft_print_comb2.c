#include <unistd.h>

void	ft_print_comb2(void)
{
	int		front_num;
	int		back_num;
	char	arr[5];

	front_num = 0;
	while (front_num <= 98)
	{
		back_num = front_num + 1;
		while (back_num <= 99)
		{
			arr[0] = front_num / 10 + '0';
			arr[1] = front_num % 10 + '0';
			arr[2] = ' ';
			arr[3] = back_num / 10 + '0';
			arr[4] = back_num % 10 + '0';
			write(1, arr, 5);
			if (front_num != 98 || back_num != 99)
				write(1, ", ", 2);
			back_num++;
		}
		front_num++;
	}
}

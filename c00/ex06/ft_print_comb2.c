/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaradum <hkaradum@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:03:45 by hkaradum          #+#    #+#             */
/*   Updated: 2024/01/31 14:09:37 by hkaradum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_int_to_char(int t)
{
	int	tens;
	int	ones;

	if (t < 10)
	{
		ft_putchar('0');
		ft_putchar(t + '0');
	}
	else
	{
		tens = t / 10;
		ones = t % 10;
		ft_putchar(tens + '0');
		ft_putchar(ones + '0');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b < 100)
		{
			ft_int_to_char(a);
			write(1, " ", 1);
			ft_int_to_char(b);
			if (a < 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}

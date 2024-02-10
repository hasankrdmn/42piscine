/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaradum <hkaradum@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 14:02:10 by hkaradum          #+#    #+#             */
/*   Updated: 2024/02/08 16:11:24 by hkaradum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	hex_converter(int c)
{
	char	*hex_values;

	hex_values = "0123456789abcdef";
	if (c / 16 > 0)
	{
		ft_putchar(hex_values[c / 16]);
		ft_putchar(hex_values[c % 16]);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(hex_values[c]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			ft_putchar('\\');
			hex_converter(str[i]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}

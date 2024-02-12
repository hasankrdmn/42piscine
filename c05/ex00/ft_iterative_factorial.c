/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaradum <hkaradum@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 23:23:33 by hkaradum          #+#    #+#             */
/*   Updated: 2024/02/11 15:35:26 by hkaradum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb == 0 || nb == 1)
		return (1);
	else if (nb < 0)
		return (0);
	i = 1;
	while (nb > 1)
	{
		i *= nb;
		nb--;
	}
	return (i);
}

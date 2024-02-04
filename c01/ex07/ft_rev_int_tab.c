/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaradum <hkaradum@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 07:53:30 by hkaradum          #+#    #+#             */
/*   Updated: 2024/02/04 10:13:20 by hkaradum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	c;
	int	i;
	int	temp;

	i = 0;
	c = size - 1;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[c];
		tab[c] = temp;
		c--;
		i++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaradum <hkaradum@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 08:15:36 by hkaradum          #+#    #+#             */
/*   Updated: 2024/02/04 13:03:59 by hkaradum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	m;

	m = *a;
	*a = *b;
	*b = m;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	t;

	i = 0;
	while (i < size)
	{
		t = 0;
		while (t < size)
		{
			if (tab[t] > tab[t + 1] && t < size - 1)
			{
				ft_swap(&tab[t], &tab[t + 1]);
			}
			t++;
		}
		i++;
	}
}

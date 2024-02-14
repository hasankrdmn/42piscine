/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaradum <hkaradum@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 04:00:09 by hkaradum          #+#    #+#             */
/*   Updated: 2024/02/14 22:47:18 by hkaradum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*dup;

	if (min >= max)
	{
		return (NULL);
	}
	i = max - min;
	dup = (int *)malloc(sizeof(int *) * (i));
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (max > min)
	{
		dup[i] = min;
		min++;
		i++;
	}
	return (dup);
}

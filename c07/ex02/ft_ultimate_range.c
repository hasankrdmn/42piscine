/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaradum <hkaradum@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 04:12:04 by hkaradum          #+#    #+#             */
/*   Updated: 2024/02/14 22:49:14 by hkaradum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*dup;
	int	i;
	
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = max - min;
	dup = (int *)malloc(sizeof(int *) * (i));
	if (dup == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = dup;
	i = 0;
	while (max > min)
	{
		dup[i] = min;
		min++;
		i++;
	}
	return (i);
}

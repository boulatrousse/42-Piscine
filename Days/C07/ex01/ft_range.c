/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboulatr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:12:24 by lboulatr          #+#    #+#             */
/*   Updated: 2022/07/19 08:54:02 by lboulatr         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	x;
	int	i;

	x = (max - min);
	i = 0;
	tab = malloc(x * sizeof(int));
	if (min >= max || tab == NULL)
	{
		tab = NULL;
		return (tab);
	}
	while (i < x)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}

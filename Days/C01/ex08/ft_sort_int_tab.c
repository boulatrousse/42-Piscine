/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboulatr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 14:22:29 by lboulatr          #+#    #+#             */
/*   Updated: 2022/07/07 15:45:46 by lboulatr         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		x;

	i = 0;
	x = 0;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			x = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = x;
			i = 0;
		}
		x++;
		i++;
	}
}

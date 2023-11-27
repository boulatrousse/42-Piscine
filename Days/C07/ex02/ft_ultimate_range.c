/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboulatr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 08:56:06 by lboulatr          #+#    #+#             */
/*   Updated: 2022/07/20 18:10:51 by lboulatr         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	x;
	int	i;

	x = (max - min);
	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(x * sizeof(int*));
	if (!*range)
		return (-1);
	while (i < x)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (x + 1);
}

int main()
{


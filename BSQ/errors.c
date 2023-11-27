/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboulatr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 13:32:47 by lboulatr          #+#    #+#             */
/*   Updated: 2022/07/27 14:57:14 by lboulatr         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "tools.h"

int	ft_atoi(char *str, int nbr_oc)
{
	int		i;
	int		x;
	int		f;
	int		ret;
	char	*buffer;

	f = open(str, O_RDONLY);
	if (f == -1)
		return (-1);
	ret = 0;
	x = 0;
	i = 0;
	ret = read(f, buffer, nbr_oc);
	while (buffer[i] >= '0' && buffer[i] <= '9')
	{
		x = (buffer[i] - 48) + (x * 10);
		i++;
	}
	return (x);
}

int	length_lines(char *str, int nbr_lines)
{
	int	i;
	int	x;
	int	y;
	int	z;

	i = 0;
	x = 0;
	y = 0;
	z = 0;
	while (str[x] != '\n')
		x++;
	if (x == 0)
		return (-1);
	while (z < nbr_lines)
	{
		while (str[i++] != '\n')
			y++;
		if (x != y)
			return (-1);
		y = 0;
		z++;
	}
	return (0);
}

int	backslash(char *str, int nbr_lines)
{
	int	i;
	int	x;
	int	z;
	int	j;

	i = 0;
	x = 0;
	z = 0;
	j = 0;
	while (str[x] != '\n')
		x++;
	while (z <= nbr_lines)
	{
		while (str[i] != '\0' && j != x)
		{
			if (str[i] == '\n' && j != x)
				return (-1);
			i++;
			j++;
		}
		z++;
		j = 0;
		i++;
	}
	return (0);
}

int	all_errors(char *str, char *map, int nbr_lines, int nbr_oc)
{
	int		x;

	x = ft_atoi(str, nbr_oc);
	if (x <= 0)
	{
		ft_putstr("map error\n");
		return (-1);
	}
	if (length_lines(map, nbr_lines) != 0)
	{
		ft_putstr("map error\n");
		return (-1);
	}
	if (backslash(map, nbr_lines) != 0)
	{
		ft_putstr("map error\n");
		return (-1);
	}
	return (0);
}

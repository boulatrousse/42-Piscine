/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboulatr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 08:01:57 by lboulatr          #+#    #+#             */
/*   Updated: 2022/07/27 14:32:52 by lboulatr         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "tools.h"

int	char_counter(char *str)
{
	int		i;
	int		x;
	int		f;
	int		ret;
	char	buffer[1];

	i = 0;
	x = 0;
	f = open(str, O_RDONLY);
	ret = 0;
	if (f == -1)
		return (-1);
	while ((ret = read(f, buffer, 1)))
		x++;
	if (close(f) == -1)
		return (-1);
	return (x);
}

char	*full_map(char *str, int nbr_oc)
{
	int		f;
	int		ret;
	int		i;
	char	*buffer;

	buffer = malloc(sizeof(char) * nbr_oc);
	f = open(str, O_RDONLY);
	if (f == -1)
		return (0);
	i = 0;
	ret = read(f, buffer, (nbr_oc + 1));
	while (buffer[i] != '\0')
	{
		if (buffer[i] == '\n')
			return (&buffer[i + 1]);
		i++;
	}
	if (close(f) == -1)
		return (NULL);
	return (0);
}

int	check_first_line2(char *buffer)
{
	int	i;
	int	j;
	int	x;

	i = 0;
	x = 0;
	while (buffer[i] >= '0' && buffer[i] <= '9')
		i++;
	j = i + 1;
	while (buffer[i] != '\n')
	{
		while (buffer[j] != '\n')
		{
			if (buffer[i] == buffer[j + 1])
				return (-1);
			else
				j++;
		}
		j = i + 1;
		x++;
		i++;
	}
	if (x != 3)
		return (-1);
	return (0);
}

int	check_printable(char *buffer)
{
	int	i;

	i = 0;
	while (buffer[i] != '\n')
	{
		if (buffer[i] >= 0 && buffer[i] <= 31)
			return (-1);
		if (buffer[i] == 127)
			return (-1);
		i++;
	}
	return (0);
}

int	check_first_line(char *str, int nbr_oc)
{
	int		f;
	int		ret;
	int		i;
	char	*buffer;

	i = 0;
	buffer = malloc(sizeof(char) * nbr_oc);
	f = open(str, O_RDONLY);
	if (f == -1)
		return (0);
	i = 0;
	ret = read(f, buffer, (nbr_oc + 1));
	if (check_first_line2(buffer) == -1)
		return (-1);
	if (check_printable(buffer) == -1)
		return (-1);
	return (0);
}

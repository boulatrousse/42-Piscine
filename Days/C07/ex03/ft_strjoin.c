/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboulatr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 09:09:41 by lboulatr          #+#    #+#             */
/*   Updated: 2022/07/21 09:16:06 by lboulatr         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int			i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		x;

	i = 0;
	x = 0;
	while (dest[i] != '\0')
		i++;
	while (src[x] != '\0')
		dest[i++] = src[x++];
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		i;

	i = 0;
	while (i < size)
	{
		tab = malloc(sizeof(char) * (ft_strlen(strs[i])
					+ ft_strlen(sep)) - (sizeof(char) * ft_strlen(sep)));
		i++;
	}
	i = 0;
	while (i < size)
	{
		if (i != 0)
			ft_strcat(tab, sep);
		ft_strcat(tab, strs[i]);
		i++;
	}
	return (tab);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboulatr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:00:29 by lboulatr          #+#    #+#             */
/*   Updated: 2022/07/20 17:27:20 by lboulatr         ###   ########lyon.fr   */
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

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*tab;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	tab = malloc(i * sizeof(char));
	if (tab == NULL)
		return (0);
	while (src[j] != '\0')
	{
		tab[j] = src[j];
		j++;
	}
	tab[j] = '\0';
	return (tab);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			i;

	i = 0;
	tab = malloc(sizeof(t_stock_str) * ac);
	if (tab == NULL)
		return (NULL);
	while (i < ac)
	{
		tab[i].size = ft_strlen(tab[i]);
		tab[i].str = tab[i];
		tab[i].copy = ft_strdup(tab[i]);
		i++;
	}
	tab[i].str = NULL;
	return (tab);
}

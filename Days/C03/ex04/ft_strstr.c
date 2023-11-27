/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboulatr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:22:40 by lboulatr          #+#    #+#             */
/*   Updated: 2022/07/12 16:38:42 by lboulatr         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		x;
	int		y;

	i = 0;
	x = 0;
	y = 0;
	if (to_find[0] == '\0')
		return (str);
	while (to_find[i] != '\0')
		i++;
	while (str[x] != '\0')
	{
		if (str[x] == to_find[0])
		{
			y = 0;
			while ((str[x + y] == to_find[y] && to_find[y] != '\0'))
				y++;
			if (to_find[y] == '\0')
				return (&str[x]);
		}
		x++;
	}
	return (0);
}

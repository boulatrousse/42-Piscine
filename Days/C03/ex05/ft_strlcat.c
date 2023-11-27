/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboulatr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:19:10 by lboulatr          #+#    #+#             */
/*   Updated: 2022/07/13 09:00:20 by lboulatr         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int			i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int		i;
	unsigned int		x;

	i = 0;
	x = ft_strlen(src) - 1;
	if (size == 0)
		return (0);
	else
	{
		while (src[i] != '\0' && i < size - 1)
			dest[x++] = src[i++];
		dest[i] = '\0';
	}
	return (x + ft_strlen(dest));
}

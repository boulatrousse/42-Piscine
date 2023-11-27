/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboulatr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:30:02 by lboulatr          #+#    #+#             */
/*   Updated: 2022/07/14 17:55:14 by lboulatr         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int		i;
	int		z;

	i = 1;
	z = 1;
	while (argv[i] != '\0')
		i++;
	i = i - 1;
	while (argv[z] != '\0')
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i--;
		z++;
	}
}		

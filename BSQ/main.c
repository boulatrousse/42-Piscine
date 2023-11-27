/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboulatr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 13:54:34 by lboulatr          #+#    #+#             */
/*   Updated: 2022/07/27 15:06:58 by lboulatr         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	int		x;
	int		y;
	char	*tab;

	x = char_counter(argv[1]);
	printf("%x\n\n", x);
	if (check_first_line(argv[1], x) != 0)
	{
		ft_putstr("map error\n");
		return (-1);
	}
	tab = full_map(argv[1], x);
	printf("%s\n\n", tab);
	y = count_lines(tab);
	if (all_errors(argv[1], tab, count_lines(tab), char_counter(argv[1])) != 0)
	{
		ft_putstr("map error\n");
		return (-1);
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboulatr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 10:37:21 by lboulatr          #+#    #+#             */
/*   Updated: 2022/07/18 07:31:47 by lboulatr         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int		res;

	res = 0;
	if (nb > 0)
		res = nb * ft_recursive_factorial(nb - 1);
	else if (nb == 0)
		res = 1;
	else
		return (0);
	return (res);
}

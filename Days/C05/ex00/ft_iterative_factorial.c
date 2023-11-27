/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboulatr <lboulatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 10:06:35 by lboulatr          #+#    #+#             */
/*   Updated: 2022/07/18 07:28:36 by lboulatr         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int		x;
	int		res;

	x = 1;
	res = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		res = 1;
	else
	{
		while (x < nb)
		{
			res = res * (nb - x);
			x++;
		}
	}
	return (res);
}

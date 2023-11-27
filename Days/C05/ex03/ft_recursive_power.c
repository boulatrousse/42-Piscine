/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboulatr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 10:55:41 by lboulatr          #+#    #+#             */
/*   Updated: 2022/07/18 07:37:10 by lboulatr         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int		res;

	res = nb;
	if (power >= 1)
		res = res * ft_recursive_power(nb, power - 1);
	else if (power == 0 && nb == 0)
		return (1);
	else if (power == 0)
		return (1);
	else if (nb < 0)
		return (0);
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboulatr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 14:39:52 by lboulatr          #+#    #+#             */
/*   Updated: 2022/07/18 07:47:10 by lboulatr         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int		i;

	i = 2;
	while (i < nb)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int		i;
	int		x;

	i = 0;
	if (ft_is_prime(nb) == 1)
		return (nb);
	else
	{
		x = nb;
		while (ft_is_prime(x) != 1)
			x++;
		return (x);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboulatr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 11:06:40 by lboulatr          #+#    #+#             */
/*   Updated: 2022/07/07 11:23:28 by lboulatr         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int			x;
	int			y;

	x = 0;
	y = 0;
	x = *a / *b;
	y = *a % *b;
	*a = x;
	*b = y;
}

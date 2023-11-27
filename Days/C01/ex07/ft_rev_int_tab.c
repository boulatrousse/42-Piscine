/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboulatr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 13:14:11 by lboulatr          #+#    #+#             */
/*   Updated: 2022/07/07 15:37:20 by lboulatr         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		x;
	int		tmp;

	i = 0;
	x = size - 1;
	tmp = 0;
	while (i < (size / 2))
	{
		tmp = tab[i];
		tab[i] = tab[x - i];
		tab[x - i] = tmp;
		i++;
	}
}

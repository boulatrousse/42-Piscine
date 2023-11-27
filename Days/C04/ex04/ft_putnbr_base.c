/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboulatr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 09:20:00 by lboulatr          #+#    #+#             */
/*   Updated: 2022/07/21 10:49:32 by lboulatr         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int			i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_strcmp_samechar(char *str)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[j] != '\0')
		{
			if (str[i] == str[j + 1])
				return (-1);
			else
				j++;
		}
		i++;
		j = i;
	}
	return (0);
}

int	ft_error(char *base)
{
	int		i;
	int		x;

	i = 0;
	x = ft_strcmp_samechar(base);
	if (base[0] == '\0' || base[1] == '\0')
		return (-1);
	if (x == -1)
		return (-1);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (-1);
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	a;
	long int	x;
	long int	err;

	a = nbr;
	x = ft_strlen(base);
	err = ft_error(base);
	if (err != -1)
	{
		if (nbr >= 0 && nbr < x)
			ft_putchar(base[nbr]);
		else if (nbr < 0)
		{
			ft_putchar('-');
			ft_putnbr_base((nbr * (-1)), base);
		}
		else if (nbr >= x)
		{
			ft_putnbr_base(nbr / x, base);
			ft_putnbr_base(nbr % x, base);
		}
	}
}

int main()
{
	int nbr = -42;
	char *base = "012";
	ft_putnbr_base(nbr, base);
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboulatr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 11:29:34 by lboulatr          #+#    #+#             */
/*   Updated: 2022/07/21 11:30:02 by lboulatr         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int			i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_errors(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (-1);
	while (base[i++] != '\0')
		if (base[i] == '+' || base[i] == '-')
			return (-1);
	i = 0;
	while (base[i] != '\0')
	{
		while (base[j] != '\0')
		{
			if (base[i] == base[j + 1])
				return (-1);
			else
				j++;
		}
		i++;
		j = i;
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int		i;
	int		x;
	int		sign;

	i = 0;
	x = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		x = (str[i] - 48) + (x * 10);
		i++;
	}
	return (x * sign);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	a;
	long int	x;
	long int	err;

	a = nbr;
	x = ft_strlen(base);
	err = ft_errors(base);
	if (err != -1)
	{
		if (nbr >= 0 && nbr < x)
			write(1, &base[nbr], 1);
		else if (nbr < 0)
		{
			write(1, "-", 1);
			ft_putnbr_base((nbr * (-1)), base);
		}
		else if (nbr >= x)
		{
			ft_putnbr_base(nbr / x, base);
			ft_putnbr_base(nbr % x, base);
		}
	}
}

int	ft_atoi_base(char *str, char *base)
{
	int	x;

	if (ft_errors(base) == 0)
	{
		x = ft_atoi(str);
		ft_putnbr_base(x, base);
	}
	return (0);
}

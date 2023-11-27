/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboulatr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 11:30:07 by lboulatr          #+#    #+#             */
/*   Updated: 2022/07/21 11:55:26 by lboulatr         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);
int	ft_errors(char *base);
int	ft_atoi(char *str);
void	ft_putnbr_base(int nbr, char *base);
int	ft_atoi_base(char *str, char *base);

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	


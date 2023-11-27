/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboulatr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 10:30:30 by lboulatr          #+#    #+#             */
/*   Updated: 2022/07/27 14:57:55 by lboulatr         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOOLS_H
# define TOOLS_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
int		count_lines(char *str);
int		char_counter(char *str);
char	*full_map(char *str, int nbr_oc);
int		check_first_line(char *str, int nbr_oc);
int		all_errors(char *str, char *map, int nbr_lines, int nbr_oc);

#endif

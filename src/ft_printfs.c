/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maguimar <maguimar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 11:39:27 by maguimar          #+#    #+#             */
/*   Updated: 2022/12/05 14:31:22 by maguimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printfs(char *str)
{
	int	i;

	i = 0;
	if (!str)
		write(1, "(null)", 6);
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

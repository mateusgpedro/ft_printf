/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maguimar <maguimar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 12:05:03 by maguimar          #+#    #+#             */
/*   Updated: 2022/12/05 16:53:35 by maguimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printfd(long nb)
{
	int	count;

	count = 0;
	if (nb < 0)
	{
		nb *= -1;
		count += ft_printfc('-');
	}
	if (nb < 10)
	{
		count += ft_printfc(nb + '0');
	}
	else if (nb >= 10)
	{
		count += ft_printfd(nb / 10);
		count += ft_printfd(nb % 10);
	}
	return (count);
}

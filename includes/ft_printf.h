/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maguimar <maguimar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 14:00:45 by maguimar          #+#    #+#             */
/*   Updated: 2022/12/05 13:01:39 by maguimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_printfc(char str);
int	ft_printfs(char *str);
int	ft_printfd(long nb);

#endif

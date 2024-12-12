/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cun <luda-cun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 13:30:14 by luda-cun          #+#    #+#             */
/*   Updated: 2024/12/12 15:56:28 by luda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conv_arg(const char *format, va_list args, int i)
{
	if (format[i] == 'c')
		return (val_cara(va_arg(args, int)));
	if (format[i] == 's')
		return (val_str(va_arg(args, char *)));
	if (format[i] == 'd')
		return (val_int(va_arg(args, int)));
	if (format[i] == 'i')
		return (val_int(va_arg(args, int)));
	if (format[i] == 'u')
		return (val_unsi_int(va_arg(args, unsigned int)));
	if (format[i] == 'x')
		return (val_hexa_min(va_arg(args, int)));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		ret;
	va_list	args;

	va_start(args, format);
	i = 0;
	ret = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (ft_strchr("cspdiuxX", format[i]))
			{
				ret += ft_conv_arg(format, args, i);
				i++;
			}
		}
		else
		{
			ft_putchar_fd(format[i], 1);
			i++;
			ret++;
		}
	}
	va_end(args);
	return (ret);
}

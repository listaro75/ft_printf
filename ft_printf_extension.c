/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_extension.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cun <luda-cun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:01:09 by luda-cun          #+#    #+#             */
/*   Updated: 2024/12/11 19:57:26 by luda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	val_int(int nbr)
{
	int	i;
	int	ret;

	ret = nbr;
	i = 0;
	if (nbr < 0)
	{
		nbr = nbr * (-1);
		i++;
	}
	if (nbr == 0)
		i = 1;
	while (nbr > 0)
	{
		nbr = nbr / 10;
		i++;
	}
	ft_putnbr_fd(ret, 1);
	return (i);
}

int	val_str(char *s)
{
	int	i;

	ft_putstr_fd(s, 1);
	i = ft_strlen(s);
	return (i);
}

int	val_cara(int c)
{
	ft_putchar_fd((char)c, 1);
	return (1);
}

int	val_unsi_int(unsigned int nbr)
{
	int res;
	int i;

	i = 0;
	res = nbr;
	while (nbr > 0)
	{
		nbr = nbr / 10;
		i++;
	}
	ft_putnbr_fd(res, 1);
	return (i);
}

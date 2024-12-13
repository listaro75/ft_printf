/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cun <luda-cun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 13:59:27 by luda-cun          #+#    #+#             */
/*   Updated: 2024/12/12 16:45:00 by luda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int i;
	i = 42;
	printf("\nres = %d\n", ft_printf(" %x ", 1));
	printf("\n");
	// printf(ft_printf(" %d %d %d %d %d %d %d", INT_MAX, INT_MIN, LONG_MAX,
			// LONG_MIN, ULONG_MAX, 0, -42));
	printf("\n");
	printf("\n res = %d\n", printf(" %%%d ", 1));
	printf("\n");
	// ft_printf(" %d %d %d %d %d %d %d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN,
		// ULONG_MAX, 0, -42);

	return (0);
}

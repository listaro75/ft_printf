/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cun <luda-cun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 13:59:27 by luda-cun          #+#    #+#             */
/*   Updated: 2024/12/11 19:45:17 by luda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int	i;

	i = -42;
	ft_printf("%c \n", 'c');
	ft_printf("%s \n", "je suis lucien");
	ft_printf("%d \n", i);
	ft_printf("%i \n", i);
	ft_printf("%u \n", i);

	return (0);
}
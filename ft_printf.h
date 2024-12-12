/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cun <luda-cun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:41:54 by luda-cun          #+#    #+#             */
/*   Updated: 2024/12/12 16:20:57 by luda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h" // Inclure votre libft si elle est utilisée
# include <stdarg.h>      // Pour gérer les arguments variadiques
# include <stdio.h>
# include <stdlib.h> // Pour malloc, free
# include <unistd.h> // Pour write

// Fonction principale
int	ft_printf(const char *format, ...);
int	val_int(int nbr);
int	val_cara(int c);
int	val_str(char *s);
int val_unsi_int(unsigned int nbr);
int	val_hexa_min(int x);
void	ft_print_revers(char *str, int i);

#endif

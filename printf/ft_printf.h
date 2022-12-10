/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcelik <alcelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:12:05 by alcelik           #+#    #+#             */
/*   Updated: 2022/12/02 18:37:10 by alcelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>

int			ft_putchar(char c);
int			ft_printpadress(unsigned long long adress);
int			ft_putnbr(int n);
int			ft_print_u_nbr(unsigned int nb);
int			ft_put_hex(unsigned int nbr, int a);
int			ft_coputstr(char *str);
int			ft_strlen(char *str);
int			ft_printf(const char *str, ...);
char		*ft_itoa(int n);
char		*ft_uitoa(unsigned int n);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_u_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcelik <alcelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 20:15:31 by alcelik           #+#    #+#             */
/*   Updated: 2022/11/30 20:18:52 by alcelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_u_nbr(unsigned int nb)
{
	if (nb > 9)
	{
		ft_put_u_nbr(nb / 10);
		ft_put_u_nbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int	ft_print_u_nbr(unsigned int n)
{
	int		lenght;
	char	*str;

	lenght = 0;
	if (n == 0)
		lenght += write(1, "0", 1);
	else
	{
		str = ft_uitoa(n);
		lenght += ft_coputstr(str);
		free(str);
	}
	return (lenght);
}

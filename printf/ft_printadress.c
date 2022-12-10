/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printadress.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcelik <alcelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:22:05 by alcelik           #+#    #+#             */
/*   Updated: 2022/11/30 20:36:41 by alcelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	adress_len(unsigned long long num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
			len++;
			num = num / 16;
	}
	return (len);
}

void	ft_put_ptr(unsigned long long num)
{
	if (num >= 16)
	{
		ft_put_ptr(num / 16);
		ft_put_ptr(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar((num + '0'));
		else
			ft_putchar((num -10 + 'a'));
	}
}

int	ft_printpadress(unsigned long long adress)
{
	int	lenght;

	lenght = ft_coputstr("0x");
	if (adress == 0)
		lenght += ft_putchar('0');
	else
	{
		ft_put_ptr(adress);
		lenght += adress_len(adress);
	}
	return (lenght);
}

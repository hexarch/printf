/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcelik <alcelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:12:19 by alcelik           #+#    #+#             */
/*   Updated: 2022/12/02 18:35:22 by alcelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_num_len(int num)
{
	int		i;

	if (num == 0)
		return (1);
	i = 0;
	while (num != 0)
	{
			num /= 10;
			i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*diz;
	long	nbr;

	nbr = n;
	len = ft_num_len(nbr);
	if (n < 0)
	{
			len++;
			nbr = -nbr;
	}
	diz = malloc(sizeof(char) * len + 1);
	if (!diz)
		return (NULL);
	diz[len] = '\0';
	while (nbr > 0)
	{
			diz[--len] = nbr % 10 + 48;
			nbr /= 10;
	}
	if (n < 0)
		diz[0] = '-';
	if (n == 0)
		diz[0] = '0';
	return (diz);
}

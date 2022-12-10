/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcelik <alcelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:57:25 by alcelik           #+#    #+#             */
/*   Updated: 2022/11/30 20:38:44 by alcelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char	*str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_u_num_len(unsigned int num)
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

int	ft_putnbr(int n)
{
	int		len;
	char	*num;

	len = 0;
	num = ft_itoa(n);
	len = ft_coputstr(num);
	free(num);
	return (len);
}

int	ft_coputstr(char *str)
{
	int		i;

	i = 0;
	if (str == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

char	*ft_uitoa(unsigned int n)
{
	char	*num;
	int		len;

	len = ft_u_num_len(n);
	num = (char *)malloc(sizeof(char) * (len + 1));
	if (!num)
		return (0);
	num[len] = '\0';
	while (n != 0)
	{
		num[len - 1] = n % 10 + 48;
		n = n / 10;
		len--;
	}
	return (num);
}

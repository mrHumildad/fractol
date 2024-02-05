/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnotaro <mnotaro@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 17:37:51 by mnotaro           #+#    #+#             */
/*   Updated: 2023/09/24 13:22:30 by mnotaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cnt_digs(int num)
{
	int	digs;

	digs = 0;
	if (num < 0)
		digs++;
	while (num)
	{
		num /= 10;
		digs++;
	}
	return (digs);
}

static char	*mallomaker(int num)
{
	int		digs;
	char	*mallo;

	digs = cnt_digs(num);
	mallo = (char *)malloc(sizeof(char) * digs + 1);
	if (!mallo)
		return (NULL);
	return (mallo);
}

static char	*check(int n)
{
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else
		return (ft_strdup("0"));
}

char	*ft_itoa(int n)
{
	char	*res;
	int		i;

	if (n == -2147483648 || n == 0)
		return (check(n));
	res = mallomaker(n);
	if (!res)
		return (NULL);
	i = cnt_digs(n) - 1;
	res[i + 1] = '\0';
	if (n < 0)
	{
		n = -n;
		res[0] = '-';
	}
	while (n / 10 >= 1)
	{
		res[i] = '0' + (n % 10);
		n = n / 10;
		i--;
	}
	if (n / 10 < 1)
		res[i] = '0' + (n + 10) % 10;
	return (res);
}
/*

int	main(void)
{
	int	x = 0;
	char *res;
	res = ft_itoa(x);
	printf("%s\n", res);
	//cnt_digs(x);
	return (0);
}*/

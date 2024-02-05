/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnotaro <mnotaro@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:14:23 by mnotaro           #+#    #+#             */
/*   Updated: 2023/09/24 13:25:26 by mnotaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	str_write(char *str, int i, int fd)
{
	while (i >= 0)
	{
		write(fd, &str[i], 1);
		i--;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	str[11];

	if (n == -2147483648)
		write (fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			n = -n;
			write (fd, "-", 1);
		}
		i = 0;
		while (n / 10 >= 1)
		{
			str[i] = '0' + (n % 10);
			n = n / 10;
			i++;
		}
		if (n / 10 < 1)
			str[i] = '0' + (n + 10) % 10;
		str_write(str, i, fd);
	}
}

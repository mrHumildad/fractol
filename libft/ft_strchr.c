/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnotaro <mnotaro@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 16:50:44 by mnotaro           #+#    #+#             */
/*   Updated: 2023/09/24 13:09:36 by mnotaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	ch;
	char	*res;

	res = (char *)str;
	ch = c;
	while (*res != '\0')
	{
		if (*res == ch)
		{
			return (res);
		}
		res++;
	}
	if (ch == '\0' && *res == '\0')
		return (res);
	return (NULL);
}

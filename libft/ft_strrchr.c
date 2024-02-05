/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnotaro <mnotaro@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:48:21 by mnotaro           #+#    #+#             */
/*   Updated: 2023/09/23 18:02:42 by mnotaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	ch;
	char	*res;

	ch = (char )c;
	res = (char *)str;
	i = ft_strlen(res);
	while (i >= 0)
	{
		if (res[i] == ch)
			return (&res[i]);
		i--;
	}
	return (NULL);
}

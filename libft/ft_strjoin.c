/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnotaro <mnotaro@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:43:59 by mnotaro           #+#    #+#             */
/*   Updated: 2023/09/24 13:17:45 by mnotaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		i;
	int		l1;
	int		l2;

	l1 = ft_strlen((char *)s1);
	l2 = ft_strlen((char *)s2);
	i = 0;
	res = (char *)malloc(sizeof(char) *(l1 + l2 + 1));
	if (!res)
		return (NULL);
	while (i < l1)
	{
		res[i] = s1[i];
		i++;
	}
	while (i < (l1 + l2 +1))
	{
		res[i] = s2[i - l1];
		i++;
	}
	res[l1 + l2 + 1] = '\0';
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnotaro <mnotaro@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:17:17 by mnotaro           #+#    #+#             */
/*   Updated: 2023/09/24 13:16:40 by mnotaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*res;
	size_t	len;

	len = ft_strlen((char *)s) + 1;
	res = (char *)malloc(len * sizeof(char));
	if (!res)
		return (0);
	ft_strlcpy(res, (char *)s, len);
	return (res);
}

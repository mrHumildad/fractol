/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnotaro <mnotaro@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:53:56 by mnotaro           #+#    #+#             */
/*   Updated: 2023/09/24 13:17:11 by mnotaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	slen;
	char			*res;
	char			*first;

	if (!s)
		return (NULL);
	slen = ft_strlen((char *)s);
	if (start > slen)
		len = 0;
	else if (len > slen - start)
		len = slen - start;
	res = (char *)malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	first = res;
	s = s + start;
	while (len--)
		*res++ = *s++;
	*(res + len + 1) = '\0';
	return (first);
}

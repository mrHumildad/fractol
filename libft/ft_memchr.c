/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnotaro <mnotaro@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:13:43 by mnotaro           #+#    #+#             */
/*   Updated: 2023/09/24 13:13:16 by mnotaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int ch, size_t n)
{
	char	*s;
	char	c;

	c = ch;
	s = (char *)str;
	while (n > 0)
	{
		if (*s == c)
			return ((void *)s);
		s++;
		n--;
	}
	return (NULL);
}
/*
int main(void)
{
	char str[] = "fhagjaag.idfuio";
	char c = '.';
	void *res = memchr(str, c, 13);
	printf("original : %s\n", res);

	char strx[] = "fhagjaag.idfuio";
	char cx = '.';
	void *resx = memchr(strx, cx, 13);
	printf("original : %s", resx);
	return (0);
}*/

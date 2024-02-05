/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnotaro <mnotaro@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 16:26:22 by mnotaro           #+#    #+#             */
/*   Updated: 2023/09/20 17:40:10 by mnotaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	di;
	unsigned int	si;
	unsigned int	sl;
	unsigned int	dl;

	si = 0;
	dl = ft_strlen(dest);
	sl = ft_strlen(src);
	di = dl;
	if (size == 0 || size <= dl)
	{
		return (sl + size);
	}
	while (src[si] != '\0' && si < size - di - 1)
	{
		dest[dl + si] = src[si];
		si++;
	}
	dest[dl + si] = '\0';
	return (di + sl);
}
/*
int main(void)
{
	char odest[18] = "abcd";
	char osrc[] = "12345";
	char cdest[18] = "abcd";
	char csrc[] = "12345";
	unsigned int size = 10;

	int original_res = strlcat(odest, osrc, size);
	int my_res = ft_strlcat(cdest, csrc, size);

	printf("original function result:  %d\n", original_res);

	printf("copied function result:  %d\n", my_res);
			
	return (0);
}
*/

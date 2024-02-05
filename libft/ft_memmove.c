/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnotaro <mnotaro@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:54:55 by mnotaro           #+#    #+#             */
/*   Updated: 2023/09/24 13:08:54 by mnotaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst2;
	unsigned char	*src2;

	dst2 = (unsigned char *)dst;
	src2 = (unsigned char *)src;
	if ((!dst && !src) || !len)
		return (dst);
	if (src < dst)
	{
		src2 = src2 + len - 1;
		dst2 = dst2 + len - 1;
		while (len--)
			*dst2-- = *src2--;
	}
	else if (src >= dst)
	{
		while (len--)
			*dst2++ = *src2++;
	}
	return (dst);
}
/*
int main () {
	char str1[50];
	char str2[50];
   strcpy(str1,"Thisis string.h library function");
   puts(str1);
   memmove(str2,str1,5);
   puts(str2);
	char str3[50];
	char str4[50];
   strcpy(str3,"Thisis string.h library function");
   puts(str3);
   ft_memmove(str4,str3,5);
   puts(str4);
   return(0);
}*/

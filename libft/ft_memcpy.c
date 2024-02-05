/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnotaro <mnotaro@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:56:23 by mnotaro           #+#    #+#             */
/*   Updated: 2023/09/24 13:08:13 by mnotaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void	*res;

	res = dest;
	if (!dest && !src)
		return (dest);
	while (n > 0)
	{
		*(char *)dest = *(char *)src;
		src++;
		dest++;
		n--;
	}
	return (res);
}
/*
int main () {
   char str[50];
	char str2[50];
   strcpy(str,"This is string.h library function");
   puts(str);

   ft_memcpy(str2,str,7);
   puts(str2);

   return(0);
}*/

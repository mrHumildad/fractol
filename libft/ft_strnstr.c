/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnotaro <mnotaro@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:46:09 by mnotaro           #+#    #+#             */
/*   Updated: 2023/09/24 13:14:34 by mnotaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	lenbig;
	size_t	lenlit;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	lenbig = ft_strlen((char *)big);
	lenlit = ft_strlen((char *)little);
	if (lenlit == 0)
		return ((char *)big);
	while ((i + j) < lenbig && (i + j) < len)
	{
		while ((big[i + j] == little[j]) && ((i + j) < lenbig && (i + j) < len))
		{
			if (j == (lenlit -1))
				return ((char *)&big[i]);
			j++;
		}
		i++;
		j = 0;
	}
	return (NULL);
}
/*
int main (void)
{
    char *big = "1234567890resultOK!";
    char *lit = "result";
    printf("original  : %s\n", strnstr(big, lit, 16));
    printf("ft_clone  : %s", ft_strnstr(big, lit, 16));

    return (0);
}*/

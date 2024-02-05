/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnotaro <mnotaro@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:02:58 by mnotaro           #+#    #+#             */
/*   Updated: 2023/09/24 13:21:34 by mnotaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checktrim(char c, char *set)
{
	while (*set != '\0')
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	i;

	i = 0;
	start = 0;
	while (s1[i] != '\0')
	{
		if (checktrim(s1[i], (char *)set))
			i++;
		else
			break ;
	}
	start = i;
	i = ft_strlen((char *)s1) - 1;
	while (i > start)
	{
		if (checktrim(s1[i], (char *)set))
			i--;
		else
			break ;
	}
	return (ft_substr(s1, start, i - start + 1));
}
/*
int main()
{
	printf("checktrim %d\n", checktrim('d', "abc"));
	printf("%s", ft_strtrim("abca123456cba", "abc"));
	return(0);
}*/

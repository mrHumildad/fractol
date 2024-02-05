/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnotaro <mnotaro@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:17:17 by mnotaro           #+#    #+#             */
/*   Updated: 2023/09/20 17:50:33 by mnotaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strndup(const char *s, size_t n)
{
	char	*res;

	res = (char *)malloc(n * sizeof(char));
	if (!res)
		return (0);
	ft_strlcpy((char *)s, res, n);
	return (res);
}

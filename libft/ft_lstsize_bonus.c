/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnotaro <mnotaro@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:04:10 by mnotaro           #+#    #+#             */
/*   Updated: 2023/09/27 17:04:14 by mnotaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*x;

	i = 1;
	x = lst;
	if (!lst)
		return (0);
	while (x -> next != NULL)
	{
		i++;
		x = x -> next;
	}
	return (i);
}

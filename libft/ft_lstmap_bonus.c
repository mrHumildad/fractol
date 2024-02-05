/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnotaro <mnotaro@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:02:27 by mnotaro           #+#    #+#             */
/*   Updated: 2023/09/27 17:02:30 by mnotaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*x;
	void	*tmp;

	res = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		tmp = f(lst -> content);
		x = ft_lstnew(tmp);
		if (!x)
		{
			del(tmp);
			ft_lstclear (&res, del);
			return (NULL);
		}
		ft_lstadd_back(&res, x);
		lst = lst -> next;
	}
	return (res);
}

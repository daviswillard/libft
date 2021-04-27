/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 14:30:08 by dwillard          #+#    #+#             */
/*   Updated: 2021/04/27 14:30:11 by dwillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*temp;
	int		counter;

	temp = lst;
	counter = 0;
	while (temp)
	{
		counter++;
		if (!temp->next)
			return (counter);
		temp = temp->next;
	}
	return (counter);
}

/*int main(void)
{
	t_list		*elem;
	t_list		*elem2;
	t_list		*elem3;
	t_list		*elem4;
	char		c;
	char		*str = ft_strdup("lorem");
	char		*str2 = ft_strdup("ipsum");
	char		*str3 = ft_strdup("dolor");
	char		*str4 = ft_strdup("sit");

	elem = ft_lstnew(str);
	elem2 = ft_lstnew(str2);
	elem3 = ft_lstnew(str3);
	elem4 = ft_lstnew(str4);

	elem->next = elem2;
	elem2->next = elem3;
	elem3->next = elem4;
	c = ft_lstsize(elem) + 48;
	write(1, &c, 1);
	write(1, "\n", 1);
	elem->next = NULL;
	c = ft_lstsize(elem) + 48;
	write(1, &c, 1);
	write(1, "\n", 1);
	elem = NULL;
	c = ft_lstsize(elem) + 48;
	write(1, &c, 1);
	write(1, "\n", 1);
	return (0);
}*/
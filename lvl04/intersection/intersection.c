/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intersection.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 02:14:11 by kradoste          #+#    #+#             */
/*   Updated: 2019/09/09 03:30:28 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct		s_node {
	void			*content;
	struct s_node	*next;
}					t_node;

void	*intersection(struct s_node *lst1, struct s_node *lst2)
{
	while (lst1)
	{
		t_node	*tmp = lst2;
		while (tmp)
		{
			if (lst1 == tmp) return (lst1);
			tmp = tmp->next;
		}
		lst1 = lst1->next;
	}
	return ((void*)0);
}


/////////////////////////////
//DONT FORGET TO COMMENT OUT
/////////////////////////////
/*
#include <stdio.h>
#include <stdlib.h>

t_node	*a(void *content)
{
	t_node	*x = (t_node *)malloc(sizeof(t_node));
	x->next = NULL;
	x->content = content;
	return (x);
}

int main()
{
	t_node *x = a(5);
	x->next = a(10);
	x->next->next = a(15);
	x->next->next->next = a(20);
	
	t_node *y = a(18);
	y->next = a(19);
	y->next->next = x->next->next->next;

	t_node *rep = intersection(x, y);
	printf("%d\n", rep->content);
	return (0);
}
*/
///////////////////////////////////

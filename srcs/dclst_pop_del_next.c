/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dclst_pop_del_next.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 12:29:16 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/05 12:39:09 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dclist.h"

t_dclist	*dclst_pop_del_next(t_dclist *lst, void (*del)(void *))
{
	t_dclist	*next;

	if (lst == NULL)
		return (NULL);
	next = lst->next;
	dclst_pop(lst);
	dclst_delone(lst, del);
	return (next);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dclst_new_addback.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:53:14 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/04 16:54:37 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dclist.h"

t_dclist	*dclst_new_addback(t_dclist *lst, void *p)
{
	t_dclist	*new_lst;

	new_lst = dclst_new(p);
	if (new_lst == NULL)
		return (NULL);
	dclst_addback(lst, new_lst);
	return (new_lst);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dclst_new_addfront.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 15:59:11 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/04 16:54:38 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dclist.h"

t_dclist	*dclst_new_addfront(t_dclist *lst, void *p)
{
	t_dclist	*new_lst;

	new_lst = dclst_new(p);
	if (new_lst == NULL)
		return (NULL);
	dclst_addfront(lst, new_lst);
	return (new_lst);
}

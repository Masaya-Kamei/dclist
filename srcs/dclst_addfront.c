/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dclst_addfront.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:18:54 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/04 17:01:58 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dclist.h"

void	dclst_addfront(t_dclist *lst, t_dclist *new_lst)
{
	if (new_lst == NULL)
		return ;
	dclst_link(new_lst, lst->next);
	dclst_link(lst, new_lst);
}

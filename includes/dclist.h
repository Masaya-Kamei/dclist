/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dclist.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 13:54:38 by mkamei            #+#    #+#             */
/*   Updated: 2022/04/04 13:54:38 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DCLIST_H
# define DCLIST_H

# include <stdlib.h>
# include <stdbool.h>

typedef struct s_dclist
{
	void			*p;
	struct s_dclist	*prev;
	struct s_dclist	*next;
}					t_dclist;

t_dclist	*dclst_new(void	*p);
void		dclst_addfront(t_dclist *lst, t_dclist *new_lst);
void		dclst_addback(t_dclist *lst, t_dclist *new_lst);
size_t		dclst_size(t_dclist *lst);
t_dclist	*dclst_last(t_dclist *lst);
void		dclst_delone(t_dclist *lst, void (*del)(void *));
void		dclst_clear(t_dclist **lst, void (*del)(void *));
t_dclist	*dclst_new_addback(t_dclist *lst, void *p);
t_dclist	*dclst_new_addfront(t_dclist *lst, void *p);
bool		dclst_exist(t_dclist *lst);
void		dclst_link(t_dclist *front, t_dclist *back);

#endif

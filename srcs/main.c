#include "dclist.h"
#include <string.h>
#include <stdio.h>

int		main(void)
{
	t_dclist	*lst;

	lst = dclst_new(NULL);
	dclst_new_addback(lst, strdup("def"));
	if (dclst_exist(lst))
	{
		dclst_new_addfront(lst, strdup("abc"));
		printf("%s, %s, %s\n", (char*)lst->p, (char*)lst->next->p, (char*)lst->next->next->p);
	}
	printf("size:%zu, last:%s\n", dclst_size(lst), (char *)dclst_last(lst)->p);
	dclst_clear(&lst, free);
	system("leaks a.out");
	return (0);
}

#include "libft.h"

int		ft_lstcount(t_list *list)
{
	int		count;

	count = 0;
	while (list)
	{
		list = list->next;
		count++;
	}
	return (count);
}
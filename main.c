#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	t_list *list;
	char str[] = "lorem";
	char str2[] = "On est la";
	
	list = ft_lstmanynew(10, str, sizeof(str));
	ft_lstaddafter(&list, ft_lstnew(str2, sizeof(str2)));
	ft_putstrlst(list);
	printf("%zi\n",ft_lstlen(list));
	return (0);
}

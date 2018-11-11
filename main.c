#include "libft.h"
#include <stdio.h>

int main(int argc, char const *argv[])
{

	char *src;

	src = "Bonjour";
	printf("%s\n",ft_memchr(src, 'j', 7));
	printf("%s\n",memchr(src, 'j', 7));
	return 0;
}



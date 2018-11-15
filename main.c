#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{

	char *src;
	char dest[8];

	src = "Bonjour";
	printf("ft_memccpy\t:%s\n",ft_memccpy(dest, src, 'j', 7));
	printf("memccpy\t:%s\n",memccpy(dest, src, 'j', 7));
	printf("ft_memchr\t:%s\n",ft_memchr(src, 'j', 7));
	printf("memchr\t:%s\n",memchr(src, 'j', 7));
	printf("ft_memcpy\t:%s\n",ft_memcpy(dest, src, 7));
	printf("memcpy\t:%s\n",memcpy(dest, src, 7));
	printf("ft_memmove\t:%s\n",ft_memmove(dest,src,5));
	printf("memmove\t:%s\n",memmove(dest,src,0));
	return 0;
}



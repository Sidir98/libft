#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

	const char *src;
	//char dest[20];

	src = "Bonjour";
	//printf("ft_memccpy\t:%s\n",ft_memccpy(dest, src, 'j', 10));
	//printf("memccpy\t:%s\n",memccpy(dest, src, 'j', 10));
	//printf("ft_memchr\t:%s\n",ft_memchr(src, 'j', 7));
	//printf("memchr\t:%s\n",memchr(src, 'j', 7));
	//printf("ft_memcpy\t:%s\n",ft_memcpy(dest, src, 7));
	//printf("memcpy\t:%s\n",memcpy(dest, src, 7));
	//printf("ft_memmove\t:%s\n",ft_memmove(dest,src,7));
	//printf("memmove\t:%s\n",memmove(dest,src,7));
	//printf("ft_memset\t:%s\n",ft_memset(dest,'j',7));
	//printf("memset\t:%s\n",memset(dest,'j',7));
	//printf("ft_strcat\t:%s\n",ft_strcat(dest,src));
	//dest[0]='\0';
	//printf("strcat\t:%s\n",strcat(dest,src));
	//printf("ft_memcmp\t:%d\n",ft_memcmp(src,dest,7));
	//printf("memcmp\t:%d\n",memcmp(src,dest,7));
	//printf("ft_strdup\t:%s\n",ft_strdup(src));
	//printf("strdup\t:%s\n",strdup(src));
	//printf("ft_strlcat\t:%zu\n",ft_strlcat(dest,src,6));
	//printf("strlcat\t:%lu\n",strlcat(dest,src,7));
	//printf("%d\n",ft_isprint('4'));
	printf("ft_strchr :\t%s\n",ft_strchr(src,'j'));
	printf("strchr :\t%s\n",strchr(src,'j'));
	return (0);
}



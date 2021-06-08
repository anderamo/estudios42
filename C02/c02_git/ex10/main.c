#include <stdio.h>
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	unsigned int n;
	char dest[] = "";
	char src[] = "Holaaa";
	n = 1
	;
	n = strlcpy(dest,src,n);
	printf("%d " , n);
	printf("%s " , dest);
	return (0);
}

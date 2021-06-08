#include <unistd.h>
#include <stdio.h>
char *ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	unsigned int n;
	char src[] = "Ander";
	char dest[] = "Amorin";

	n = 3;
	ft_strncpy(dest, src, n);	
	printf( "%s ", dest);
	return (0);
}

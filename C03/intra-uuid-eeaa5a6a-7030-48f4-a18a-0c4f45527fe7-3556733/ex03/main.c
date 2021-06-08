#include <stdio.h>
char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
	int nb;
	char dest[20] = "Ander";
	char src[] = " Amorin";
	nb = 4;

	ft_strncat(dest,src,nb);
	printf("%s ", dest);
} 
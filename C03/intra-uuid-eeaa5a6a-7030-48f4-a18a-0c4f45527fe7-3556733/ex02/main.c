#include <stdio.h>
char *ft_strcat(char *dest, char *src);

int main(void)
{
	char dest[20] = "Ander";
	char src[] = " Amorin";

	ft_strcat(dest,src);
	printf("%s ", dest);
} 

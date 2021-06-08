#include <stdio.h>
char *ft_strcapitalize(char *str);

int	main(int a, char *str[])
{
	char *array;
	array = ft_strcapitalize(str[1]);
	printf("%s " , array);
	return (0);
}

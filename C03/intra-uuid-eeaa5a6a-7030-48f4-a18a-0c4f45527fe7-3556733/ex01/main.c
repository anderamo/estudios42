#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	int a;
	int j;
	char s1[] = "heydfad";
	char s2[] = "fasdfsd";
	int n;

	n = 4;
	j = strncmp(s1,s2,n);
	printf("%d ", j);
	a = ft_strncmp(s1,s2,n);
	printf("%d ", a);
}   

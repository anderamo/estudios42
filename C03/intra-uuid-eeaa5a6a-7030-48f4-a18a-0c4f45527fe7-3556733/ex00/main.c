#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
	int a;
	char s1[] = "hey was";
	char s2[] = "hey was";
	printf("%d \n", strcmp(s1, s2));
	a = ft_strcmp(s1,s2);
	printf("%d ", a);;
}

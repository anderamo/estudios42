#include <stdio.h>
char *ft_strstr(char *str, char *to_find);
int main()
{
    char *X = "Techie Delight - Ace the Technical Interviews";
    char *Y = "-";
 
    printf("%s\n", ft_strstr(X, Y));
 
    return 0;
}
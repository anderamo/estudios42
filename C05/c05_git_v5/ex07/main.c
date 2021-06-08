#include <stdio.h>
int ft_find_next_prime(int nb);

int	main()
{
	    printf("El siguiente número primo a -3 es %d (2).\n", ft_find_next_prime(-3));
    printf("El siguiente número primo a 0 es %d (2).\n", ft_find_next_prime(0));
    printf("El siguiente número primo a 8 es %d (11).\n", ft_find_next_prime(8));
    printf("El siguiente número primo a 11 es %d (11).\n", ft_find_next_prime(11));
    printf("El siguiente número primo a 12 es %d (13).\n", ft_find_next_prime(12));
    printf("El siguiente número primo a 13 es %d (13).\n", ft_find_next_prime(13));
    printf("El siguiente número primo a 15 es %d (17).\n", ft_find_next_prime(15));
    printf("El siguiente número primo a 21 es %d (23).\n", ft_find_next_prime(21));
    printf("El siguiente número primo a 24 es %d (29).\n", ft_find_next_prime(24));
	printf("El siguiente número primo a 24 es %d (29).\n", ft_find_next_prime(2147483647));
	return (0);
}

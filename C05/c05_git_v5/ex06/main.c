#include <stdio.h>
int ft_is_prime(int nb);

int	main(void)
{
	printf("0 = %d\n", ft_is_prime(-4123412));
    printf("0 = %d\n", ft_is_prime(-12));
    printf("0 = %d\n", ft_is_prime(-2271));
	printf("0 = %d\n", ft_is_prime(0));
	printf("1 = %d\n", ft_is_prime(1));
	printf("2 = %d\n", ft_is_prime(2));
	printf("3 = %d\n", ft_is_prime(3));
	printf("4 = %d\n", ft_is_prime(4));
	printf("5 = %d\n", ft_is_prime(5));
	printf("6 = %d\n", ft_is_prime(6));
	printf("7 = %d\n", ft_is_prime(7));
	printf("10 = %d\n", ft_is_prime(10));
	printf("11 = %d\n", ft_is_prime(11));
	return 0;
}

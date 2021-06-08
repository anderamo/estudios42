//!!!!!!!!!!C00!!!!!!!!!!!!!//
//void ft_putchar(char c);
//void ft_print_alphabet(void);
//void ft_print_reverse_alphabet(void);
//void ft_print_numbers(void);
//void ft_is_negative(int n);
//void ft_print_comb(void);
//void ft_print_comb2(void);
//void ft_putnbr(int nb);
//void ft_print_combn(int n);
//!!!!!!!!!!C01!!!!!!!!!!!!!//
//void ft_ft(int *nbr);
//void ft_ultimate_ft(int *********nbr);
//void ft_swap(int *a, int *b);
//void ft_div_mod(int a, int b, int *div, int *mod);
//int ft_strlen(char *str);
//void ft_ultimate_div_mod(int *a, int *b);
//void ft_putstr(char *str);
//int ft_strlen(char *str);
//void ft_rev_int_tab(int *tab, int size);
//void ft_sort_int_tab(int *tab, int size);
//!!!!!!!!!!C02!!!!!!!!!!!!!//

int	main(void)
{
	/*
	//!!!!!!!!!!C00!!!!!!!!!!!!!//
	ft_putchar();
	ft_print_alphabet();
	ft_print_reverse_alphabet();
	ft_print_numbers();
	ft_is_negative();
	ft_print_comb();
	ft_print_comb2();
	ft_putnbr();
	ft_print_combn();
	//!!!!!!!!!!C01!!!!!!!!!!!!!//
	ft_ft();
	ft_ultimate_ft();
	ft_strlen();
	ft_ultimate_div_mod();
	ft_putstr();
	ft_strlen();
	ft_rev_int_tab();
	ft_sort_int_tab();
	*/
	return (0);
}
/*
C01=ex05
*********************** 
void    ft_putstr(char *str);

int main(void)
{
    char c[11]="Hello World";
    ft_putstr(c);
    return (0);
}
C01=ex06
*********************** :
void    ft_strlen(char *str);

int main(void)
{
    char c[11]="Hello World";
    ft_strlen(c);
    return (0);
}
C01=ex07
***********************         
void    ft_rev_int_tab(int *tab, int size);

int main(void)
{
    int c[4] = {1, 2, 3, 4};
    ft_rev_int_tab(c,4);
    return (0);
}
*/
/*
C01=ex08
*********************
void    ft_sort_int_tab(int *tab, int size);

int main(void)
{
    int c[5] = {5, 2, 8, 7, 1};
    ft_sort_int_tab(c,5);
    return (0);
}
printf( "%d ", tab[0] );
printf( "%d ", tab[1] );
printf( "%d ", tab[2] );
printf( "%d ", tab[3] );
printf( "%d ", tab[4] );

//!!!!!!!!!!C02!!!!!!!!!!!!!//
EX00
#include <unistd.h>
#include <stdio.h>
char *ft_strcpy(char *dest, char *src);

int	main(void)
{
	char src[] = "Ander";
	char dest[];

	ft_strcpy(dest,src);
	printf( "%s ", dest);
	return (0);
}
EX01
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
EX02
#include <stdio.h>
int ft_str_is_alpha(char *str);

int main(void)
{
    int write_string;

    write_string = ft_str_is_alpha("Ander34Amorin");
    printf("%d ", write_string);
    return (0);
}
EX09
#include <stdio.h>
char *ft_strcapitalize(char *str);

int main(int a, char *str[])
{
    char *array;
    array = ft_strcapitalize(str[1]);
    printf("%s " , array);
    return (0);
}
EX10
#include <stdio.h>
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{
    unsigned int n;
    char dest[] = "";
    char src[] = "Holaaa";
    n = 4;
    n = ft_strlcpy(dest,src,n);
    printf("%d " , n);
    return (0);
}
*/
/*
printf( "%d ", tab[0] );
printf( "%d ", tab[1] );
printf( "%d ", tab[2] );
printf( "%d ", tab[3] );
printf( "%d ", tab[4] ); 
*/
void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int c[5] = {5, 2, 8, 7, 1};	
	ft_sort_int_tab(c,5);	
	return (0);
}

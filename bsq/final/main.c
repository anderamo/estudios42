#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
char 	**ft_malloc(int c, int h)
{
	char	**square_l;
	char 	*square_r;
	int i;
	int columnas;
	columnas = h/c;
	square_l = malloc(c * sizeof(char **));

	i = 0;

	while (i < c)
	{
		square_r = malloc(columnas * sizeof(char *));
		square_l[i] = square_r;
		i++;
	}
	return (square_l);
}

void readingmap(int c, int h)
{
}

int main()
{
    int		i;
	int 	j;
	int		h;// Contara las columnas del fichero
	char	buffer[1000];
	int		fd;
	int 	c;// contara las líneas del fichero
	ssize_t nr_bytes;
	char 	**rect;
	char 	buffer2[1000];
	i = 0;
	h = 0;
	c = 0;
	fd = open("tablero", O_RDONLY);
	if(fd == -1)
	printf("%s", "File open error.\n");
	while(read(fd, &buffer[i], 1) != 0)
	{
		if (buffer [i] == '\n')
				break;
	}
	while (read(fd, &buffer[i], 1) != 0)
	{
		if (buffer[i] == '\n')
		{
			c++;
		}
		else
			h++;
	}
		printf("El numero de lineas del rectánglo es %d\n", c);
		printf("El contenido de cada una de las lines del rectangulo es %d\n", h/c);
	
		
	close(fd);;

	rect = ft_malloc(c, h);
	i = 0;
	j = 0;
	fd = open("tablero", O_RDONLY);
	if(fd == -1)
		printf("%s", "File open error\n");
	while(read(fd, &buffer2[i], 1) != 0)
	{
		if (buffer2[i] =='\n')
			break;
	}

	while (read(fd, buffer2, 1) !=0)
	{
		if (*buffer2 =='\n')
		{
			i++;
			j = 0;	
		}
		else
		{
			rect[i][j] = *buffer2;
			j++;
		}
	}
		i = 0;
	while ( i < 13)	
	{
		printf("%s", rect[i]);
		printf("\n");
		i++;
	}
}

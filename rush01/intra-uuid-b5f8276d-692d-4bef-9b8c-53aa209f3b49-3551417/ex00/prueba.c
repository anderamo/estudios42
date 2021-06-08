#include <stdio.h>
#include <stdlib.h>
  
int main()
{
    int i;
    int k;


    i = 0;

       int (*arr)[4] = malloc(sizeof(int[4][4]));

/* 
  	arr[0][1] = 4;
  	arr[0][2] = 3;
  	arr[0][3] = 2;
  	arr[0][4] = 1;
  	arr[1][0] = 4;
  	arr[1][5] = 1;
  	arr[2][0] = 3;
  	arr[2][5] = 2;
  	arr[3][0] = 2;
  	arr[3][5] = 2;
  	arr[4][0] = 1;
  	arr[4][5] = 2;
  	arr[5][1] = 1;
  	arr[5][2] = 2;
  	arr[5][3] = 2;
  	arr[5][4] = 2;
*/
  	k = 0;
  	i = 0;
  	while(k < 4)
  	{
  		i = 0;
  		while (i < 4)
  		{
  		printf("%d ", arr[k][i]); 		
  		i++;
  		}
  		printf("\n");
  		k++;
  	}
  

   return 0;
}

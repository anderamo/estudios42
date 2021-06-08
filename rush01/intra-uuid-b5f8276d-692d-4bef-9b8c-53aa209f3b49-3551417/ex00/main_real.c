#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


int    structure(int values_array)
{
 int i;
    int k;
  
    int **arr;

    i = 0;
    while (i < 6)
    {
         arr[i] = (int *)malloc(6 * sizeof(int));
         i++; 
    }

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

    /*  k = 0;
    i = 0;
    while(k < 6)
    {
      i = 0;
      while (i < 6)
      {
      printf("%d ", array[k][i]);     
      i++;
      }
      printf("\n");
      k++;
    } 
     */


   return arr;
}

int  init(char *argv)
{
  int *array;
  int k,i;

  *array = atoi(argv);
  printf("%d ", array[1]);

  //structure();

  
    return 0;

}

int main(int n, char *argv[])
{
    if (n == 2)
   {
       init(argv[1]);
       return 1;
   }
    else
    {
        write(1, "Error", 5);
        write(1, "\n" , 1);
        return 0;
    }
}
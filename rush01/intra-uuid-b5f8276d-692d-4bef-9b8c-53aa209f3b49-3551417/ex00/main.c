#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void    parse_params(char *array)
{
    char    colup[4];
    char    coldown[4];
    char    rowleft[4];
    char    rowright[4];
    int     i;
    int     j;

    j = 0;
    i = 0;
    
    while ( i < 16)
    {
        if (i == 0)
        {
            while(j < 4)
            {
                colup[j] = array[i];
                j++;
                i++;
            }
        }
        j = 0;
        if (i == 4)
        {
            while(j < 4)
            {
                coldown[j] = array[i];
                j++;
                i++;
            }
        }
        j = 0;
        if (i == 8)
        {
            while(j < 4)
            {
                rowleft[j] = array[i];
                j++;
                i++;
            }
        }
        j = 0;
        if (i == 12)
        {
            while(j < 4)
            {
 
                rowright[j] = array[i];
                j++;
                i++;
            }
        }
      
    }
    i = 0;

}

void    rules(char *structure_array[6])
{
    char *arr[6];

}

void    structure(void)
{
    int i;
    int k;
  
    char *arr[6];

    i = 0;
    while (i < 6)
    {
         arr[i] = (char *)malloc(6 * sizeof(char));
         i++;
 }
/*
    arr[0][1] = '4';
    arr[0][2] = '3';
    arr[0][3] = '2';
    arr[0][4] = '1';
    arr[1][0] = '4';
    arr[1][5] = '1';
    arr[2][0] = '3';
    arr[2][5] = '2';
    arr[3][0] = '2';
    arr[3][5] = '2';
    arr[4][0] = '1';
    arr[4][5] = '2';
    arr[5][1] = '1';
    arr[5][2] = '2';
    arr[5][3] = '2';
    arr[5][4] = '2';

*/
    k = 0;
    i = 0;
    while(k < 6)
    {
        i = 0;
        while (i < 6)
        {
        arr[k][i] = '*';
        printf("%c ", arr[k][i]);     
        i++;
        }
        printf("\n");
        k++;
    }
    rules(arr);
}

void    remove_space(char *argv)
{
    char result[16];
    int i;
    int j;

    i = 0;
    j = 0;
    while(argv[i] != '\0')
    {
        if (argv[i] != 32)
        {
            result[j] = argv[i];
            j++;
        }
        i++;
    }
    parse_params(result);
}

int main(int n, char *argv[])
{
    if (n == 2)
   {
       remove_space(argv[1]);
       return 1;
   }
    else
    {
        write(1, "Error", 5);
        write(1, "\n" , 1);
        return 0;
    }
}

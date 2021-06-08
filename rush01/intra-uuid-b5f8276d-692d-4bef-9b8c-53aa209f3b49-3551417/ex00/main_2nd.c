/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_2nd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 17:56:38 by aamorin-          #+#    #+#             */
/*   Updated: 2021/04/25 17:56:41 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char g_first_time = 'y';

void    put_value(int x, int y, int c)
{
    int i;
    int k;
    int (*arr)[4];

    if (g_first_time == 'y')
    {
      int (*arr)[4] = malloc(sizeof(int[4][4]));
      g_first_time = 'n';
    }
    if(arr[1][])
    arr[x][y] = c;
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
   
    
}
void  rules(char *colup,char *coldown,char *rowleft,char *rowright)
{
  int i;

  i = 0;
  while (i < 4)
  {
    //If 1-2 combination print 3 on 2 side.
    if (colup[i] == '1')
    {
      if (coldown[i] == '2')
        put_value(3, i, 3); 
    }
    if (coldown[i] == '1')
    {
      if (colup[i] == '2')
        put_value(3, i, 3); 
    }
     if (rowleft[i] == '1')
    {
      if (rowright[i] == '2')
        put_value(i, 3, 3); 
    }
    if (rowright[i] == '1')
    {
      if (rowleft[i] == '2')
        put_value(i, 3, 3); 
    }
    //If 1 print 4 on it side.
    if (colup[i] == '1')
    {
      if (coldown[i] != '4')
        put_value(0, i, 4); 
    }

    if (coldown[i] == '1')
    {
      if (colup[i] != '4')
        put_value(0, i, 4); 
    }

    if (rowleft[i] == '1')
    {
      if (rowright[i] != '4')
        put_value(0, i, 4); 
    }

    if (rowright[i] == '1')
    {
      if (rowleft[i] != '4')
        put_value(0, i, 4); 
    }
  //If 3-2 combination print 4 in the 3rd positon.
if (colup[i] == '3')
    {
      if (coldown[i] == '2')
        put_value(2, i, 4); 
    }
    if (coldown[i] == '3')
    {
      if (colup[i] == '2')
        put_value(2, i, 4); 
    }
     if (rowleft[i] == '3')
    {
      if (rowright[i] == '2')
        put_value(i, 2, 4); 
    }
    if (rowright[i] == '3')
    {
      if (rowleft[i] == '2')
        put_value(i, 2, 4); 
    }
    //If 2-3 combination print 4 in the 2nd positon.
if (colup[i] == '2')
    {
      if (coldown[i] == '3')
        put_value(1, i, 4); 
    }
    if (coldown[i] == '2')
    {
      if (colup[i] == '3')
        put_value(2, i, 4); 
    }
     if (rowleft[i] == '2')
    {
      if (rowright[i] == '3')
        put_value(i, 1, 4); 
    }
    if (rowright[i] == '2')
    {
      if (rowleft[i] == '3')
        put_value(i, 2, 4); 
    }
  //If 4-1 combination print 1,2,3,4 on 4 side.
    if (colup[i] == '4')
    {
      if (coldown[i] != '1')
      {
      write(1, "Error", 5);
    break;
  }
      else
      {
        put_value(0, i, 1);
        put_value(1, i, 2);
        put_value(2, i, 3);
        put_value(3, i, 4);
      }
    }
   if (coldown[i] == '4')
    {
      if (colup[i] != '1')
      {
      write(1, "Error", 5);
    break;
  }
      else
      {
        write(1, "Dentro", 6);
        /*
        put_value(0,i,4);
        put_value(1,i,3);
        put_value(2,i,2);
        put_value(3,i,1);
        */
      }
    }
    if (rowleft[i] == '4')
    {
      if (rowright[i] != '1')
      write(1, "Error", 5);
      else
      {
        put_value(i,0,1);
        put_value(i,1,2);
        put_value(i,2,3);
        put_value(i,3,4);
      }
    }
    if (rowright[i] == '4')
    {
      if (rowleft[i] != '1')
      write(1, "Error", 5);
      else
      {
        write(1, "Dentro", 6);
        /*
        put_value(i,0,4);
        put_value(i,1,3);
        put_value(i,2,2);
        put_value(i,3,1);
        */
     
      }
    }
    i++;
  }

}

void  init(char *argv)
{
  char    colup[4];
  char    coldown[4];
  char    rowleft[4];
  char    rowright[4];
  int j,i,k;

  j = 0;
  i = 0;
  k = 0;

  while(argv[i] != '\0')
    {
        while(i >= 0 && i <= 6)
        {
        colup[j] = argv[i];
        i = i + 2;
        j++;
        }
        j = 0;
        while(i >= 7 && i <= 14)
        {
        coldown[j] = argv[i];
        i = i + 2;
        j++;
        }
        j = 0;
        while(i >= 15 && i <= 22)
        {
        rowleft[j] = argv[i];
        i = i + 2;
        j++;
        }
        j = 0;
        while(i >= 23 && i <= 30)
        {
        rowright[j] = argv[i];
        i = i + 2;
        j++;
        }

      i++;
    }
    i = 0;

    rules(colup,coldown,rowleft,rowright);
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngasco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 09:48:54 by ngasco            #+#    #+#             */
/*   Updated: 2021/04/25 15:38:00 by ngasco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
VALID NUMBERS
For the numbers to be valid, they must be bigger or equal than 1 and smaller or equal than the square side (e.g. 1, 2, 3, 4 in the example above)


SUMS OF OPPOSITE NUMBERS
The sum of two opposite numbers (e.g. 3 and 1 in the example above) cannot exceed 5 in a 4x4 grid.
 	- If the sum exceeds 5 --> ERROR 


FIRST STEP - SAFE CASES
1) All 1-4 and 4-1 cases can be filled immediately.
2) Wherever there is a 1 (e.g 1-3, 2-1), a 4 can be added immediately.
3) All 2-1 and 1-2 cases start and end with either a 3 or a 4.
4) In all 3-2 and 2-3 cases, the position of 4 is marked by the number themselves (e.g. in a 3-2 pair, the 4 is placed on the third position from the left, which also the second from the right).


CHOOSING A STRATEGY
At this point, the table is relatively full and two strategies can be chosen:

- Prioritizing cases that are relatively easy. The most notable ones are rows or columns where only two adjacent fields are missing and the 4 is given. Following this route entails quite a lot of logic, but it essentially boils down to putting the remaining numbers either in ascending or descending order.

- Brute force approach. Whenever two (or even three numbers) are missing, all possible combinations can be double-checked against the existing numbers.
	- This approach struggles when the board is not very populated.
	- Both approaches can be used to prioritize particularly easy cases.
	- This approach can get quite complicated when more than one option is valid.

FILLING TWO ADJACENT EMPTY BOXES
When two adjacent boxes are empty and a 4 is available, the solution can be easy to find. Let's populate the board above with the rock-solid cases:

  | 3| 1| 2| 3|
--|--|--|--|--|--
 2|  | 4|  |  |3
--|--|--|--|--|--
 3|  | 3| 4|  |2 
--|--|--|--|--|--
 2|  | 2|  | 4|1
--|--|--|--|--|--
 1| 4| 1|  |  |2
--|--|--|--|--|--
  | 1| 4| 2| 2|

Once the board is populated this way, we can prioritize the last 1-2 case, i.d. 1 -> 4 1 * * <- 2.
The only two available numbers are 2 and 3. Since they face the 2 and one of the visible block must be the 4, and since the 4 is in the 3rd position, the numbers must be put in ascending order, i.e. 3, 2.

  | 3| 1| 2| 3|
--|--|--|--|--|--
 2|  | 4|  |  |3
--|--|--|--|--|--
 3|  | 3| 4|  |2 
--|--|--|--|--|--
 2|  | 2|  | 4|1
--|--|--|--|--|--
 1| 4| 1| 2| 3|2
--|--|--|--|--|--
  | 1| 4| 2| 2|

Now the same logic can be applied to the vertical 3-2 case in the fourth column. Since the empty boxes faces the 3 and the only available numbers are 1 and 2, and since the 4 is in the 3rd position, they must be put in ascending order.

BRUTE FORCE APPROACH
An alternative is trying all combinations and checking if they're compatible with other numbers in the same column.
  | 3| 1| 2| 3|
--|--|--|--|--|--
 2|  | 4|  |  |3
--|--|--|--|--|--
 3|  | 3| 4|  |2 
--|--|--|--|--|--
 2|  | 2|  | 4|1
--|--|--|--|--|--
 1| 4| 1|  |  |2
--|--|--|--|--|--
  | 1| 4| 2| 2|

In the case above, taking as an example the very first row (2-3), all combinations of missing numbers can be tried. E.g. 1 - 4 - 2 - 3, 2 - 4 - 1 - 3, and 3 - 4 - 2 - 3 are all acceptable solutions. In order for this system to work, more combinations must be checked against each other. 
Maybe a recursive solution can be found for this issue.
*/


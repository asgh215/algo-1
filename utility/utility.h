#include "stdio.h"
#include "stdlib.h"
#include "math.h"

/* Assumes 0 <= max <= RAND_MAX
 * Returns in the closed interval [0, max]
 * from: http://stackoverflow.com/questions/2509679/how-to-generate-a-random-number-from-within-a-range
 */
long random_at_most(long max);

/* print array
 */
void printArray(int array[], int length);

/* count number of digits for a number 
 */
int countDigits(int number);

/* chunk a number based upon the "start" position and "end" position and return the number in between (inclusive)
 * Start position begins from "0" from the most significant bit.
 * For example: number = 123456789, 
 *              start = 0, end = 2, will give 123 in return.
 *              start = 3, end = 5, will give 456 in return.
 *              start = 6, end = 8, will give 789 in return.
 */
int chunk_number(int number, int start, int end);
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n,n1;
srand(time(0));
n = rand() - RAND_MAX / 2;
n1 = n % 10;
if(n1 > 5)
printf("Last digit of %i is %i and is greater than 5\n", n, n1);
else if(n1 == 0)
printf("Last digit of %i and is %i\n", n, n1);
else
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, n1);
return (0);
}
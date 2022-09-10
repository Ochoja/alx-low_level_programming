#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main program block
 * Return: 0 to end program
 */

int main(void)
{
	int n;        

	srand(time(0));
	n = rand() - RAND_MAX / 2;

        if(n == 0 || n % 10 == 0)
	  printf("Last digit of n is 0 and is 0");
	else if(n < 10 && n > 0)
	  printf("Last digit of n is %d", n);
	else if(n > 10){
	  while(n > 10){
	    n -= 10;
	    if(n < 10){
	      printf("Last digit of n is %d",n);
	    }
	      
	  }
	} else if(n < 0){
	  while(n < 0){
	    n = n + 10;
	    if(n > -10){
	      printf("Last digit of n is %d",n);
	    }
	  }
	}

	if(n < 6 && n != 0)
	  printf(" and is less than 6 and not 0\n");
	else
	  printf("\n");
	return (0);
}

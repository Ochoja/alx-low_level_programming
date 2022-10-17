#include <stdio.h>

void modif_my_char_var(char *cc, char ccc)
{
	*cc = 'o';
	ccc = 'l';

	printf("\n\n");
	printf("The value of pointer 'cc' is %p\n", cc);
	printf("The value of the address %p is %c\n", cc, *cc);
}


int main(void)
{
	char c;
	char *p;

	p = &c;
	c = 'H';

	printf("The value of 'c' is %c\n", c);
	printf("The address of 'c' is %p\n", &c);
	printf("The value of 'p' is %p\n", p);

	modif_my_char_var(p, c);

	return (0);
}

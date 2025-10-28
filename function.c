#include <stdio.h>

void print_rboxed(double rnum)
{
     printf("***********\n");
     printf("*         *\n");
     printf("* %7.2lf *\n", rnum);
     printf("*         *\n");
     printf("***********\n");
}

int
main (void)
{
	double n;
	
	printf ("Enter a number: ");
	scanf ("%lf", &n);
	print_rboxed (n);
	
	return (0);
}

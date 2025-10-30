#include <stdio.h>

int
main (void)
{
   printf("For loop\n");   
   for(int i = 0; i < 100; i++){ /*Loop initialization; condition; increments/decrements*/
      printf("%d ", i); //Printing the Variable
    }
   
   printf("\n While loop\n");    
   int n = 0; /* loop initialization */
   while(n <= 100){ /*While n is less than or equal to 100*/
      printf ("%d ", n); /**/
      n = n + 1;
   }
   
   printf("\n Do While loop\n");  
   n=0;
   do{
      printf("%d ", n);
      n++;
    }while (n <= 100); 

   return (0);
}

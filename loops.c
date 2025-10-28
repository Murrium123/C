#include <stdio.h>
#define COUNT_TO 100

int
main (void)
{
   int n;
 
   n = 1; /* loop initialization */
 
   printf("For loop\n");   
   for(int i = 0; i < 100; i++){
      printf("%d ", i);
    }
   printf("\n While loop\n");       
   while(n <= COUNT_TO){
      printf ("%d ", n);
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

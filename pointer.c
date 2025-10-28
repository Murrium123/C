#include <stdio.h>

int main (void) {
   int a = 5;
   int* aptr = &a;
   printf("My variable is called %s and it is an integer with the value of %d. The pointer for this variable is called %s which holds the memory address of my variable which is %p. It itself is stored at %p", "a", a, "aptr", aptr, &aptr );
   return (0);
}

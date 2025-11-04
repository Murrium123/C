#include <stdio.h>

int main (void) {
      int grade =50;//Create integer called grade to test condition.
      if (grade > 60){printf("You passed! Your grade is %d\n",grade);} //If statement checks whether the grade variable value is above 60. If it is, it gets a specific statement printed. 
      else{printf("I am sorry buddy, you didn't make it this time. ");} //Else statement collects all the values that do not pass the if statement and prints a statement.
	return (0); //Return 0 in the main to let the compiler know that there are no errors. 
}

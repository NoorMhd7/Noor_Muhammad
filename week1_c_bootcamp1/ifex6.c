#include <stdio.h>
int main() {
int number;    
printf("Please enter the number between 0 and 100 or enter -1 to end this: ");
scanf("%d", &number);

  while (1) {
        if ( number == -1)
        {printf( "You have reached the termination value"); break;
        }
            else if (number >= 0 && number <=100)
        {printf("You have entered the valid number to continue");
        }
            else  
        {printf("Inavalid number");
        }
   }

return 0;
}
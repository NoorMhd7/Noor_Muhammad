#include <stdio.h>
int main() {
int number;    
    while (1) {
        printf("Please enter the number between 0 and 100 or enter -1 to end this:\n");
        scanf("%d", &number);

        if ( number == -1)
        {printf( "You have reached the termination value. \n"); break;
        }
            else if (number >= 0 && number <=100)
        {printf("You have entered the valid number to continue. \n");
        }
            else  
        {printf("Inavalid number\n");
        }
   }

return 0;
}
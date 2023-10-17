#include <stdio.h>
int main () {
int menu;
printf( "please choose the menu number you would like to visit: " );
scanf("%d", &menu);
switch (menu)
{
case 1: printf("Wlecome to menu 1"); break;
case 2: printf("Welcome to menu 2"); break;
case 3: printf("welcom to menu 3"); break;
case 4: printf("wlecome to menu 4"); break;
case 5: printf("Welcome to menu 5"); break;
default: printf("Error, Please enter a number between 1 and 5 to enter menu");

}
return 0;
}
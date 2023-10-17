#include <stdio.h>
int main () {
int mark;
printf( "Please ener your marks: ");
scanf("%d", &mark);
if (mark >= 70)
{printf(" You have got a distinction");}
else if (mark > 50)
{printf("You pass");}
else 
{printf("You fail");}
return 0;
}
#include <stdio.h>
int main () {
int temperature;
printf("Input temperature: ");
scanf("%d", &temperature);

if (-10 <= temperature <= 40)
{printf("Your temperature is in range\n");}

else 
{printf("Your temperature not in range\n");}

return 0;
}
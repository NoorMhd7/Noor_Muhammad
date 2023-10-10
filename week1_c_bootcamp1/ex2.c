#include <stdio.h>  

int main()    
{ float first;
  printf("First number: ");
  scanf("%f", &first);

  float second;
  printf("Second number: ");
  scanf("%f", &second);

  float a = first + second;
  printf("%f\n", a);
  return 0;


}
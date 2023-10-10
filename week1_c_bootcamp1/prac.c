#include <stdio.h>  

int main()

{ float length;
  printf("length of the rectangle: ");
  scanf("%f", &length);

  float width;
  printf("length of width: "); 
  scanf("%f", &width);          // char int float use & after variable

  float area = length * width;
  printf("%f\n", area);        // & only used in scanf
  return 0;


}
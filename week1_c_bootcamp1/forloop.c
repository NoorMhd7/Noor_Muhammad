#include <stdio.h>

int main() {
    int a;

    for (a = 1; a <= 11; a += 2)  {
        printf("a = %d\n", a);
    }

    printf("after exiting loop: a = %d\n", a);
}



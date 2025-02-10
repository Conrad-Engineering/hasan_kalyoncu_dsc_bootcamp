#include "stdio.h"

/*
 gcc -E first_code.c -o first_code.i
 gcc -S first_code.c -o first_code.s
 gcc -c first_code.c -o first_code.o
 gcc first_code.o -o first_code
*/

int main() {
    printf("Hello, there, how are u!\n");
    return 0;
}

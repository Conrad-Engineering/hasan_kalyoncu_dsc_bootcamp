#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

// void delay();

// int sumOrMin(int a, int b, bool sum);

// void void_sum(int a, int b);

void swap(int *a, int *b);

int recursiveFunc();

int factorial(int n);

int main(int argc, char const *argv[])
{
    // printf("Open regulator 1\n");
    // delay();
    // printf("Open regulator 2\n");
    // delay();
    // printf("Open regulator 3\n");
    // delay();

    // printf("sum: %d\n", sumOrMin(4, 2, true), 0);
    // printf("min: %d\n", sumOrMin(4, 2, false), 0);

    // int a = 5;
    // int b = 8;
    // printf("A address: %x\n", &a);
    // printf("B address: %x\n", &b);
    // printf("Before swap: a = %d, b = %d\n", a, b);
    // swap(&a, &b);
    // printf("After swap: a = %d, b = %d\n", a, b);
    // swap(&a, &b);
    // printf("After swap: a = %d, b = %d\n", a, b);
    // swap(&a, &b);
    // printf("After swap: a = %d, b = %d\n", a, b);

    // recursiveFunc();
    printf("Factorial: %d\n", factorial(5));
    return 0;
}


void swap(int *a, int *b)
{
    printf("in function\n");
    printf("A address: %x\n", a);
    printf("B address: %x\n", b);
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("In function swap: a = %d, b = %d\n", *a, *b);
}

int factorial(int n)
{
    if (0 == n)
        return 1;
    return n * factorial(n - 1);
}


// void delay()
// {
//     for (uint16_t i = 0; i < 10000; i++)
//     {
//     }
// }

// int sumOrMin(int a, int b, bool sum)
// {
//     if (sum)
//         return a + b;
//     return a - b;
// }

// void void_sum(int a, int b)
// {
//     if (5 == a)
//     {
//         printf("Invalid input\n");
//         return;
//     }
//     printf("Sum: %d\n", a + b);
// }

/*
char            1 byte       -128 to 127 or 0 to 255
unsigned char   1 byte       0 to 255
signed char     1 byte       -128 to 127
int	            2 or 4 bytes -32,768 to 32,767 or -2,147,483,648 to 2,147,483,647
unsigned int    2 or 4 bytes 0 to 65,535 or 0 to 4,294,967,295
short           2 bytes      -32,768 to 32,767
unsigned short  2 bytes      0 to 65,535
long            8 bytes      -9223372036854775808 to 9223372036854775807
unsigned long   8 bytes      0 to 18446744073709551615

float           4 bytes
double           8 bytes
*/

#include "stdlib.h"
#include "stdio.h"
#include "stdint.h"
#include "stdint.h"
#include "stdbool.h"

void testFunction();

void testFormalVariableFunction(uint16_t val); // Formal

const float PI = 3.14; // Global

uint32_t val = 1024; // Global

int main() 
{
    /*
        static -> Global
        extern -> Global
        const
        volatile homework
        register homework
    */
    for (uint8_t i = 0; i < 5; i++)
    {
        testFunction();
        testFormalVariableFunction(17);
    }
   

    uint16_t val; // Local
    // printf("dfgdgdfgd\n");
    // char val_1 = -10;
    // float val_2 = 3.14;
    // printf("%d, %u, %x\n", val_1, val_1, val_1);

    // printf("%f, %lf\n", val_2, val_2);
    // char a_char = 'a';
    // printf("%c, %x, %d\n", a_char, a_char, a_char);

    // for (uint16_t i = 0; i < 270; i++)
    //     printf("%d\n", i);

    // bool tmp = false;

    // {
    //     uint16_t tmp;
    //     uint32_t val = 512;
    //     printf("Custom scope: %d\n", val);
    // }

    // printf("Custom scope: %d\n", tmp);

    // printf("main: %d\n", val);

    // testFunction();

    return 0;
}

void testFunction()
{
    uint16_t val; // Local
    printf("testFunction: %d\n", val);
}

void testFormalVariableFunction(uint16_t val) // Formal
{
    // val -> Formal
    // _val -> Local
    {
        uint16_t val = 0; // Normal Local
        val++;
        static uint16_t val_static = 0; // Static Local
        val_static++;
        printf("testFormalVariableFunction normal local: %d\n", val);
        printf("testFormalVariableFunction static local: %d\n", val_static);
    }
    uint16_t _val = val;
    printf("testFormalVariableFunction: %d\n", _val);
}

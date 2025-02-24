#include "stdlib.h"
#include "stdio.h"
#include "stdint.h"
#include "stdint.h"
#include "stdbool.h"

enum
{
    RED = 5,
    GREEN,
    BLUE = 10,
    CYAN,
} color;

typedef enum
{
    NULL_POINTER = 0,
    UNSUCCESSFUL,
    SUCCESSFUL
} state;

typedef enum
{
    _SENSOR_CONF_REG = 0x50,
    _SENSOR_CURR_REG = 0x55,
    _SENSOR_VOLT_REG = 0x56,
} registers_t;

#define SENSOR_CONF_REG 0x50
#define SENSOR_CURR_REG 0x55
#define SENSOR_VOLT_REG 0x56

state get_state(int *addr)
{
    if (NULL == addr)
        return NULL_POINTER;
    return SUCCESSFUL;
}

state write_cmd(int addr)
{
    return SUCCESSFUL;
}


int main(int argc, char const *argv[])
{

    // printf("Color: %d\n", RED);
    // printf("Color: %d\n", GREEN);
    // printf("Color: %d\n", BLUE);

    int test;
    switch (get_state(&test))
    {
        case NULL_POINTER:
            /* code */
            break;
        case UNSUCCESSFUL:
            /* code */
            break;
        case SUCCESSFUL:
            /* code */
            break;
            
        default:
            break;
    }
    // if (UNSUCCESSFUL == get_state(&test))
    // {
    //     printf("State is unsuccessful\n");
    // }
    // else
    // {
    //     printf("State is successful\n");
    // }

    write_cmd(SENSOR_CONF_REG);
    write_cmd(_SENSOR_CONF_REG);
    return 0;
}

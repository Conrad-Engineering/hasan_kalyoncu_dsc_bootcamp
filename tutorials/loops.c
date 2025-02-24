#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

/*
    for loop
    while loop
    do while loop
*/

bool init();

int main(int argc, char const *argv[])
{
    // for loop
    // uint8_t c = 0;
    // for (; ; )
    // {
    //     printf("Inside for loop: %d\n", c);
    // }
    // printf("Outside for loop: %d\n", c);

    // while loop
    // while (1)
    // {
    // }

    // do while loop
    // do
    // {
    //     printf("Inside do while loop\n");
    // } while (0);

    // for (uint8_t c = 0; c < 10; c++)
    // {
    //     // read
    // }
    // printf("Waiting A\n");
    // bool is_msg_received = false;
    // while (!is_msg_received)
    // {
    //     uint8_t _char = getchar();
    //     if ('A' == _char)
    //         is_msg_received = true;
    // }
    // printf("Received A\n");

    // do
    // {
    //     printf("Inside do while loop\n");
    // } while (!init());

    // for (uint8_t c = 0; c < 10; c++)
    // {
    //     if (5 == c)
    //         continue;
    //     if (7 == c)
    //         break;
    //     printf("Inside for loop: %d\n", c);

    //     // break
    //     // continue
    // }


    // float readed_curr = 0.0;
    // bool is_closing_switch = false;
    // while (true)
    // {
    //     readed_curr += 1; 
    //     if (readed_curr > 5)
    //         break;
    // }
    // /* */
    // is_closing_switch = true;

    // while (true)
    // {
    //     // Read
    //     // Process
    //     // if data is unvalid
    //     // continue;
    //     // Write
    // }
    
    return 0;
}

bool init()
{
    static int _cnt = 0;
    _cnt++;
    if (_cnt > 2)
        return true;
    return false;
}

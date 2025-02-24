#include "stdlib.h"
#include "stdio.h"
#include "stdint.h"
#include "stdint.h"

#define UART_PROTOCOL_HEADER 0xFFFE
#define UART_CONST_CHECKSUM  0xFF

#define TRUE  1
#define FALSE 0

typedef int bool_t;

typedef enum
{
    _HEADER_START_BYTE_POS     = 0x00, 
    _HEADER_LEN_BYTE_POS       = 0x02,
    _HEADER_PKG_START_BYTE_POS = 0x03,
} header_pos_t;


typedef enum
{
    _PARSING_STATE_HEADER_FAULT   = -4, 
    _PARSING_STATE_LEN_FAULT      = -3, 
    _PARSING_STATE_CHECKSUM_FAULT = -2,
    _PARSING_STATE_NULL_PTR       = -1,
    _PARSING_STATE_SUCCESS        = 0,
} parsing_state_t;


int8_t receiveAndParseMsg(uint8_t arr[], uint8_t arr_len)
{
    if (NULL == arr)
        return _PARSING_STATE_NULL_PTR;
    uint16_t _header = ((uint16_t)arr[_HEADER_START_BYTE_POS] << 8) | arr[_HEADER_START_BYTE_POS + 1];
    if (_header != UART_PROTOCOL_HEADER)
        return _PARSING_STATE_HEADER_FAULT;
    uint8_t _len = arr[_HEADER_LEN_BYTE_POS];
    if (_len != arr_len)
        return _PARSING_STATE_LEN_FAULT;
    uint8_t _received_checksum = arr[arr_len - 1];
    if (_received_checksum != UART_CONST_CHECKSUM)
        return _PARSING_STATE_CHECKSUM_FAULT;

    printf("Message: %s\n", &arr[_HEADER_PKG_START_BYTE_POS]);

    return _PARSING_STATE_SUCCESS;
}


int main(int argc, char const *argv[])
{
    
    // uint8_t _arr[10];
    // printf("Sizeof array: %d\n", sizeof(_arr));
    
    // uint16_t _arr_2[10];
    // printf("Sizeof array: %d\n", sizeof(_arr_2));
    
    // char _arr_3[10];
    // strcpy(_arr_3, "Hello");
    // printf("Sizeof array: %d\n", sizeof(_arr_3));
    // printf("Array: %s\n", _arr_3);
    
    // uint8_t _arr[5][5];

    // for (uint8_t i = 0; i < 5; i++)
    // {
    //     for (uint8_t j = 0; j < 5; j++)
    //         _arr[i][j] = (i * 5) + j;
    // }

    // printf("Sizeof array: %d\n", sizeof(_arr));

    // uint8_t _arr_2[25];
    // memcpy(_arr_2, _arr, sizeof(_arr));
    // for (uint8_t i = 0; i < 25; i++)
    // {
    //     printf("%d ", _arr_2[i]);
    // }

    // _arr_2[5];


    // // for (uint8_t i = 0; i < 5; i++)
    // // {
    // //     for (uint8_t j = 0; j < 5; j++)
    // //     printf("%d ", _arr[i][j]);
    // // }

    // bool_t _flag = FALSE;
    // if (_flag)
    //     printf("Flag is true\n");
    // else
    //     printf("Flag is false\n");

    { // Success
        uint8_t _arr[] = {0xFF, 0xFE, 0x00, 'H', 'E', 'L', 'L', 'O', 0x00, 0xFF};
        _arr[_HEADER_LEN_BYTE_POS] = sizeof(_arr);
        printf("State: %d\n", receiveAndParseMsg(_arr, sizeof(_arr)));
    }

    { // NULL PTR
        printf("State: %d\n", receiveAndParseMsg(NULL, 4));
    }
    
    { // Checksum
        uint8_t _arr[] = {0xFF, 0xFE, 0x00, 'H', 'E', 'L', 'L', 'O', 0xF1};
        _arr[_HEADER_LEN_BYTE_POS] = sizeof(_arr);
        printf("State: %d\n", receiveAndParseMsg(_arr, sizeof(_arr)));
    }

    { // Header
        uint8_t _arr[] = {0xFE, 0xFE, 0x00, 'H', 'E', 'L', 'L', 'O', 0xFF};
        _arr[_HEADER_LEN_BYTE_POS] = sizeof(_arr);
        printf("State: %d\n", receiveAndParseMsg(_arr, sizeof(_arr)));
    }

    { // len
        uint8_t _arr[] = {0xFF, 0xFE, 0x00, 'H', 'E', 'L', 'L', 'O', 0xFF};
        _arr[_HEADER_LEN_BYTE_POS] = sizeof(_arr) + 5;
        printf("State: %d\n", receiveAndParseMsg(_arr, sizeof(_arr)));
    }
    

    
    return 0;
}

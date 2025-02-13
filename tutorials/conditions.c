#include "stdlib.h"
#include "stdio.h"
#include "stdint.h"
#include "stdint.h"
#include "stdbool.h"

bool testFunction(int val);

int main() 
{
    // if
    // if (1)
    // {
    //     printf("if true\n");
    // }
    // if (0)
    // {
    //     printf("if false\n");
    // }
    
    // if - else
    // if (1)
    // {
    //     printf("if true\n");
    // }
    // else
    // {
    //     printf("else\n");
    // }

    // if (0)
    // {
    //     printf("if false\n");
    // }
    // else
    // {
    //     printf("else\n");
    // }

    // if - else if - else


    // uint8_t soc = 70;

    // if (soc > 80)
    // {
    //     printf("Battery is full\n");
    // }
    // else if (soc > 60)
    // {
    //     printf("Battery is good\n");
    // }
    // else if (soc > 40)
    // {
    //     printf("Battery is low\n");
    // }
    // else
    // {
    //     printf("Battery is critical\n");
    // }

    // if (1)
    //     printf("if true\n");
    // if (0)
    // {
    //     printf("if false\n");
    //     printf("if false\n");
    //     printf("if false\n");
    // }

    // if (soc > 80)
    // {
    //     printf("Battery is full\n");
    // }
    // if ((soc > 60) && (soc < 80))
    // {
    //     printf("Battery is good\n");
    // }
    // if ((soc > 40) && (soc < 60))
    // {
    //     printf("Battery is low\n");
    // }
    // if ((soc > 0) && (soc < 40))
    // {
    //     printf("Battery is critical\n");
    // }

    // if (0)
    // {
    //     printf("if false\n");
    // }
    // else if (0)
    // {
    //     printf("else if 1 true \n");
    // }
    //     else if (1)
    // {
    //     printf("else if 2 true \n");
    // }
    //     else if (1)
    // {
    //     printf("else if 3 true \n");
    // }
    // else if (1)
    // {
    //     printf("else if true \n");
    // }
    // else
    // {
    //     printf("else\n");
    // }

    // switch case
    // uint8_t state = 1;
    // switch (state) // Switch machine homework
    // {
    //     case 1:
    //     printf("case 1\n");
    //         break;
    //     case 5 ... 10:
    //     printf("case 2\n");
    //         break;
    //     default:
    //     printf("case 3\n");
    //         break;
    // }

    return 0;
}

bool testFunction(int val)
{
    if (5 == val)
        return false;

    /**/
    if (20 == val)
        return false;

    return true;
}

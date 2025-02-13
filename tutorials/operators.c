#include "stdlib.h"
#include "stdio.h"
#include "stdint.h"
#include "stdint.h"
#include "stdbool.h"

int main() 
{

/*
    Comparison
        ==	Equal to	x == y	Returns 1 if the values are equal
        !=	Not equal	x != y	Returns 1 if the values are not equal	
        >	Greater than	x > y	Returns 1 if the first value is greater than the second value	
        <	Less than	x < y	Returns 1 if the first value is less than the second value	
        >=	Greater than or equal to	x >= y	Returns 1 if the first value is greater than, or equal to, the second value	
        <=	Less than or equal to	x <= y	Returns 1 if the first value is less than, or equal to, the second value
*/
    // printf("is equal: %d\n", 5 == 5);
    // printf("is equal: %d\n", 5 == 3);

    // printf("is not equal: %d\n", 5 != 5);
    // printf("is not equal: %d\n", 5 != 3);

    // printf("is greater than: %d\n", 5 > 6);
    // printf("is greater than: %d\n", 5 > 1);
    // printf("is less than: %d\n", 5 < 3);
    // printf("is less than: %d\n", 5 < 8);

    // printf("is greater than: %d\n", 5 >= 6);
    // printf("is greater than: %d\n", 5 >= 1);
    // printf("is greater than: %d\n", 5 >= 5);
    // printf("is less than: %d\n", 5 <= 3);
    // printf("is less than: %d\n", 5 <= 8);
    // printf("is less than: %d\n", 5 <= 5);

    // uint8_t tmp = 0;
    // if (5 == tmp)
    // {
    //     printf("tmp is 5\n");
    // }

/*
&& 	AND	x < 5 &&  x < 10	Returns 1 if both statements are true	
|| 	OR	x < 5 || x < 4	Returns 1 if one of the statements is true	
!	NOT	!(x < 5 && x < 10)	Reverse the result, returns 0 if the result is 1
*/

    printf("AND: %d\n", (5 < 5) && (5 < 10));
    printf("or: %d\n", (5 < 5) || (5 < 10));
    printf("AND | NOT: %d\n", !(5 < 5) && (5 < 10));

    /*
+	Addition	Adds together two values	x + y	
-	Subtraction	Subtracts one value from another	x - y	
*	Multiplication	Multiplies two values	x * y	
/	Division	Divides one value by another	x / y	
%	Modulus	Returns the division remainder	x % y	
++	Increment	Increases the value of a variable by 1	++x	
--	Decrement	Decreases the value of a variable by 1	--x

=	x = 5	x = 5	
+=	x += 3	x = x + 3	
-=	x -= 3	x = x - 3	
*=	x *= 3	x = x * 3	
/=	x /= 3	x = x / 3	
%=	x %= 3	x = x % 3	
    */
   uint8_t val = 10;
   printf("val: %d\n", ++val);
   printf("val: %d\n", val++);
   printf("val: %d\n", val);

    uint16_t a = 17;
    printf("a: %d\n", a);
    a += 10; // += -> a = a + 10
    printf("a: %d\n", a);
    a -= 5;  // -= -> a = a - 5
    printf("a: %d\n", a);

    return 0;
}

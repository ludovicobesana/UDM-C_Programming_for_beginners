/*========================================================
 * Name: LogicalOperators.c
 * Author: Ludovico Besana
 * Version: 1.0
 * Description: Logical operators in c
 * True means return 1, false means returns 0
 * &&	Logical AND. True only if all operands are true
 * ||	Logical OR. True only if either one operand is true
 * !	Logical NOT. True only if the operand is false
 *======================================================*/

#include <stdio.h>

int main()
{
    int c = 5, d = 2, result;

    result = (c == d) && (c > d);
    printf("(c == d) && (c > d) is %d \n", result); 

    result = (c == d) || (c > d);
    printf("(c == d) || (c > d) is %d \n", result); 

    result = (!(c > d)); 
    printf("(!(c == d)) is %d \n", result); 
    return 0;
}

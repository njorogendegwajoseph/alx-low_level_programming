#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);



/**
* op_add - Returns the sum.
* @a: The first operant
* @b: The second operant.
*
*/
int op_add(int a, int b)
{
    return (a + b);
}

/**
* op_sub - Returns the difference.
* @a: The first operant
* @b: The second operant.
*
*/
int op_sub(int a, int b)
{
    return (a - b);
}

/**
* op_div - Returns the division.
* @a: The first operant
* @b: The second operant.
*
*/
int op_div(int a, int b)
{
    return (a / b);
}

/**
* op_mul - Returns the mult.
* @a: The first operant
* @b: The second operant.
*
*/
int op_mul(int a, int b)
{
    return (a * b);
}

/**
* op_mod - Returns the remaindercd.
* @a: The first operant
* @b: The second operant.
*
*/
int op_mod(int a, int b)
{
    return (a % b);
}

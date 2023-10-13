#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
*op_add - function name to returns the sum of two numbers.
*@a: function parameter a
*@b: function parameter b
*
*Return: return the sum of a and b.
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
*op_sub - function name to returns the difference of two numbers.
*@a: function parameter a
*@b: function parameter b
*
*Return: The difference of a and b.
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
*op_mul - function name to returns the product of two numbers
*@a: function parameter a
*@b: function parameter b
*
*Return: return the product of a and b.
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
*op_div - function name to returns the division of two numbers
*@a: function parameter a
*@b: function parameter b
*
*Return: return the quotient of a and b.
*/
int op_div(int a, int b)
{
	return (a / b);
}
/**
*op_mod - function name to return the modulus of two numbers.
*@a: function parameter a
*@b: function parameter b
*
*Return: return the modulus of two numbers.
*/
int op_mod(int a, int b)
{
	return (a % b);
}

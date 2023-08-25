/**
  * opp_add - A functiont o add two integers
  * @a: The first integer 
  * @b: The second integer
  * Return: results
  */
#include "3-calc.h"
int op_add(int a, int b)
{
	unsigned int result;

	result = a + b;
	return (result);
}

/**
  * op_sub - A function to subtract two integers
  * @a: First integer
  * @b: Second integer
  * Return: Results
  */
int op_sub(int a, int b)
{
	unsigned int result;

	result = a - b;
	return (result);
}

/**
  * op_mul - A function to multiply two integers
  * @a: First integer
  * @b: Second integer
  * Return: results
  */
int op_mul(int a, int b)
{
	unsigned int result;

	result = a * b;
	return (result);
}

/**
  * op_div - A function to divide two integers
  * @a: First integer
  * @b: Second integer
  * Return: Result
  */
int op_div(int a, int b)
{
	unsigned int result;

	result = a / b;
	return (result);
}

/**
  * op_mod - A function to find the remainder of two integers
  * @a: First integer
  * @b: Second integer
  * Return: Result
  */
int op_mod(int a, int b)
{
	unsigned int result;

	result = a % b;
	return (result);
}


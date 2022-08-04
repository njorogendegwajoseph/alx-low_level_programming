#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters to be given.
 * @...: A variable number of param to calculate.
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int index, sum = 0;


	va_start(nums, n);

	for (index = 0; index < n; index++;)
		sum += va_args(nums, int);

		va_end(nums);

		return (sum);
}

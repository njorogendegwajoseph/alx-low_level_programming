#include <stdio.h>
/**
 * This code displays the sizes of different data types
 * Main- This is a function.
 * Description - This function initiates the comiling process.
 * Return _ This is the return function.
 * Description _ This function prints returns 0 on succesful completion.
 */
int main(void)
{
		printf("size of int: %d bytes\n", sizeof(int));
		printf("size of a long int: %d bytes\n", sizeof(long int));
		printf("Size of a float:%d bytes\n", sizeof(float));
		printf("Size of a char: %d bytes\n", sizeof(char));
		printf("Size of a long long int: %d bytes", sizeof(long long int));
		return (0);
}

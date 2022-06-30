#include <stdio.h>
/**
 * Main- This is a function that initializes compilation.
 *
 * Return -  This returns 0 when succesful
 */
int main(void)
{
		printf("size of int: %d byte(s)\n", sizeof(int));
		printf("size of a long int: %d byte(s)\n", sizeof(long int));
		printf("Size of a float:%d byte(s)\n", sizeof(float));
		printf("Size of a char: %d byte(s)\n", sizeof(char));
		printf("Size of a long long int: %d byte(s)", sizeof(long long int));
		return (0);
}

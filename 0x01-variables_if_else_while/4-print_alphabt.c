#include <stdio.h>

/**
 * main -This will print the alphabet in lower-case
 * then a new line, except q and e
 *
 *
 * Return- this will be 0 when succesful.
 */

int main(void)
{int i = 97;
while (i < 123)
{
if (i != 101 && i != 113)
putchar(i);
}
i++;
}
putchar(10);
return (0);
}


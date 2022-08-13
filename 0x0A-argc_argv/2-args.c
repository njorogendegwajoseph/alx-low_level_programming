#include <stdio.h>

/**
* main - prints args in reverse.
* @argc: no of command linre args.
* @arggv: array that contain cl args.
* Return: 0 when succesful.
*/

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
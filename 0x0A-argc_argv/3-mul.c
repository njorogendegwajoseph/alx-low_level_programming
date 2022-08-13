#include <stdio.h>
#include <stdlib.h>

/**
* main_ multiplies two numbers
* @argc: number of CL arguments.
* @argv: array that contain the prgram CL args.
* Return: 0 when success.
*/

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Eroor\n");
        return (1);
    }
    printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
    return (0);
}
#include <main.h>

/**
 * main - this checksthe alphabetic charactrs
 *
 * return 0 when false.
 * return 1 when true.
 */

int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

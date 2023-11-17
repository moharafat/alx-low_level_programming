#include <stdio.h>
/**
 * before the main - prints string before main function
 */
void myConstructor( void ) __attribute__ ((constructor))
{
	printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
}

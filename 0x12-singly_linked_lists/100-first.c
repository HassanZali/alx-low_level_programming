#include <stdio.h>

void show_first(void) __attribute__ ((constructor));

/**
 * show_first - function name prints a sentence before the main
 * function is executed
 */
void show_first(void)

{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}

#include <stdio.h>

/**
* main - Prints the size of various  types a based on
* the computer it is compiled and run on. .
* Return 0 (Success)
 */
int main(void)
{
printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(char));
printf("Size of int: %lu bytes(s)\n", (unsigned long)sizeof(int));
printf("Size of long int: %lu bytes(s)\n", (unsigned long)sizeof(long int));
printf("Size of long long int: %lu  bytes(s)\n", (unsigned long)sizeof(long long int));
 printf("Size of float: %lu bytes(s)\n", (unsigned long)sizeof(float));   
return (0);
}

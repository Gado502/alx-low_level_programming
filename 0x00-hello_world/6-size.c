#include <stdio.h>
/**
* main - A Programming that prints the size of various  computer  types
* Return:  0 (Success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
printf("Size of char: %lu byte(s)\n", sizeof(a));
printf("Size of int: %lu bytes(s)\n", sizeof(b));
printf("Size of long int: %lu bytes(s)\n", sizeof(c));
printf("Size of long long int: %lu  bytes(s)\n", sizeof(d));
 printf("Size of float: %lu bytes(s)\n", sizeof(f));   
return (0);
}


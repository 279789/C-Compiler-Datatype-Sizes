#include <stdio.h>
#include <limits.h>

int main(void) {
	printf("Size of char: %zu byte(s)\n", sizeof(char));
	printf("Bits per byte (CHAR_BIT): %d\n", CHAR_BIT);
	printf("Size of int: %zu byte(s) \n", sizeof(int));
	printf("Size of float: %zu byte(s)\n", sizeof(float));
	printf("Size of double: %zu byte(s)\n", sizeof(double));
	return 0;
}

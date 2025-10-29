#include <stdio.h>
#include <stdlib.h>

int main() {
	int x = 10;
	int *pX;
	pX = &x;
	printf("size of: %lu", sizeof(*pX));
	return 0;

}

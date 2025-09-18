#include <stdio.h>
#include <string.h>

void add_one(int *y) {
	*y = *y + 1;
}

int main() {
	int x;
	x = 10;
	add_one(&x);

	int *pX;
	pX = &x;

	printf("Value x via pointer *pX: %d\n", *pX); // *pX -> x -> 10
	printf("using add_one function: %d\n", x);
	return 0;

}

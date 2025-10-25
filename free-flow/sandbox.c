#include <stdio.h>
#include <string.h>

void add_one(int *y) {
	*y = *y + 1;
	printf("y is %d\n", *y);
}

int main() {
	int x = 10;
	add_one(&x);
	printf("Value of x %d\n", x);
	return 0;	
}

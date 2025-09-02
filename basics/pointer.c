#include <stdio.h>
// pointer x points to the value 10
// which stored in the ampersand address
void addOne(int *x) {
	 *x = *x + 1;
}

int main () {
	int value = 10;
	// gives the variable an address
	// keeps it in memory.
	addOne(&value); 

	// prints out the value 11
	printf("Value: %d\n", value);

	return 0;


}

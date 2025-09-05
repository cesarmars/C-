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

	int x = 2; // int variable
	int *pX;  // pointer variable that stores the variable x using an address	
	pX = &x; // pointer that stores the value 2 has an address

	printf("Value of x: %d\n", x); // prints out the value 2
	printf("The address of x: %p\n", &x); // address of x
	printf("The address via pointer -> pX: %p\n", pX); // the same as above (pX = &x)
	printf("Value of x via pointer -> *pX: %d\n", *pX); // prints out the value 2

	*pX = *pX + 2; // updates (int value) and (int *pX) to 2 + 2 = 4

	printf("Value of new x: %d\n", x); // prints out the value 4
	printf("Value of new x via pointer -> *pX: %d\n", *pX); // prints out the value 4
	printf("The address of x: %p\n", &x); // same address
	printf("The address of x via pointer -> pX: %p\n", pX); // same address

	return 0;


}

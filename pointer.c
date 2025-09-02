#include <stdio.h>

void addOne(int x) {
	 x = x + 1;
}

int main () {

	int value = 2;
	int *pValue = &value;
	addOne(value);

	printf("Add one: %d\n", value);
	
	
	printf("Value: %d\n", value);
	printf("Address: %p\n", &value);
	printf("Pointer: %d\n", *pValue);

	*pValue = 10;

	printf("Value new: %d\n", value);
	printf("Address same: %p\n", &value);
	printf("Pointer new: %d\n", *pValue);

	return 0;

	



}

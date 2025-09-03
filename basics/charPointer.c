#include <stdio.h>

int main() {

	char word[]= "Hello"; // a string -> [H,e,l,l,o,\0 ], length is 5
	char *pWord = word; // pointer to the array of characters;

	printf("String: %s\n", word); // prints out the string "Hello"
	printf("Pointer to the first element of the array: %c\n", *pWord); // pointer points to the first character of the array -> 'H'
	printf("The address: %p\n", pWord); // prints out the address of the pointer
	
	// if you want to move to the pointer to the next character
	pWord++; // same as x = x + 1
	printf("Pointer to the second  element of the array: %c\n", *pWord); // prints out the second element of the array 'e'

	return 0;

}

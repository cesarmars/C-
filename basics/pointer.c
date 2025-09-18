#include <stdio.h>
#include <string.h>

int main () {
	char array[] = "hello";  // -> ['h','e','l','l','o','\0'], the length of the string "hello" is 5, not including the null terminator.

	printf("Size of the array:%lu\n", strlen(array));

	printf("First element of the array: %c\n", array[4]);
	

	return 0;


}

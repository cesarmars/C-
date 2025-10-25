#include <stdio.h>
#include <stdint.h>

int main() {
	//First example, manually locating and obtaining values from the array, manual indexing, somewhat efficient
	char str[] = "hello"; // -> ['h', 'e', 'l', 'l', 'o', '\0'], a string is an array of characters with a null terminator at the end

	printf("First letter of the string at index 0 %c\n and its address %p\n", str[0], &str[0]);
	printf("Second letter of the string at index 1 %c\n and its address %p\n", str[1], &str[1]);
	printf("Third letter of the string at index 2 %c\n and its address %p\n", str[2], &str[2]);

	// Another way of obtaining the characters is via pointer but it takes up more memory because you are allocating a pointer to each element so not very optimal 
	char name[] = "Jeff"; // -> ['J', 'e', 'f', 'f', '\0']
	char *ptr_0index = &name[0];
	char *ptr_1index = &name[1];
	// etc 
	char *ptr_4index = &name[4];
		
	printf("First character of the string at index 0 via pointer %c\n and its adress %p\n", *ptr_0index, ptr_0index);
	printf("Last character of the string at index 4 %d\n and its address %p\n", *ptr_4index, ptr_4index);

	// A third way is using pointer arithmetic, where you assing a single pointer to the first element of the array, effiecient as manual indexing 
	uint32_t arr[] = {2,33,200};
	
	printf("Pointer to the first element %d and the address %p\n", *arr, arr);
	printf("Pointer to the second element %d\n and the address %p\n", *(arr + 1), arr + 1);
	printf("Pointer to the third element %d\n and the address %p\n", *(arr + 2), arr + 2);
	return 0;

}

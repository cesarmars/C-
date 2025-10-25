#include <stdio.h>
// string length function
int findLen(char *s) {

	int i = 0;
	while(*s++) i++;
	return i;

}

int main(int argc, char *argv[]) {
	char str[] = "hello world"; // string
	char letter = 'a'; // character

	printf("String: %s\n", str);
	// Does not include '\0' -> ['h','e','l','l','O',' ','w','o','r','l','d','\0'] 
	printf("Manual string length finder: %d\n", findLen(str)); // prints 11
	printf("My character: %c\n", letter); // prints out character 'a'
	

	return 0;


}

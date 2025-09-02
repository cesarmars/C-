#include <stdio.h>
// string length manual function
int findLen(char *s) {

	int i = 0;
	while(*s++) i++;
	return i;

}

int main(int argc, char *argv[]) {
	char str[] = "hello world";
	char letter = 'a';

	printf("String: %s\n", str);
	// Does not include '\0' -> ['h','e','l','l','O',' ','w','o','r','l','d','\0'] 
	printf("Manual string length finder: %d\n", findLen(str)); 
	printf("My character: %c\n", letter);	

	return 0;


}

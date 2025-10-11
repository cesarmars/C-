#include <stdio.h>

int strlen_user(char s[]) {
	int i = 0;
	while (*s != '\0') {
		i++; 	
		s++;
	}
	return i;
}

int main() {
	char name[] = "Jeff";
	printf("Length of the string is %d\n", strlen_user(name));
	return 0;
}

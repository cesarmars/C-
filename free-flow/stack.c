#include <stdio.h>

void c() {
	int z = 55;
	printf("%p\n", &z);
}

void b() {
	int y = 28;
	printf("%p\n", &y);
	c();
}

void a() {
	int x = 10;
	printf("%p\n", &x);
	b();
}

int main() {
	int value = 3939;
	printf("%p\n", &value);
	a();	
	return 0;
}

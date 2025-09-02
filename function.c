#include <stdio.h>

// Void function, does not return anything
void sayHi() {

	printf("Hello person.\n");

}
// Return type function. Returns values 
double cubed(double x) {

	return (x * x * x);

}

int addition(int a, int b) {

	if (a == b) {
		return (a * a);
	}

	else {
		return (a + b); 
	}

	return 0;
} 
 
// A user-defined function to store variables = structure
struct Holder {
	// user-defined variables
	int a; 
	int b;
};

// Function that returns a struct
// Acts like a constructor similar to java
struct Holder makeHolder(int x, int y) {
	struct Holder p; // sets a local struct variable 
	p.a = x; // sets (int a) from the struct Holder function to x
	p.b = y; // sets (int b) from the struct Holder function to y
	return p; // return the intialized struct variable
}

// Now we want to write it out
// Function that takes a struct as an argument
// Prints outs the coordinates int a, b;
void printHolder(struct Holder  p) {
	printf("(%d,%d)\n", p.a, p.b);
}

int main () {
	
	struct Holder x = makeHolder(2,2);
	printHolder(x);

	return 0;

}


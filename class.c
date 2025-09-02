#include <stdio.h>
#include <string.h>

struct Student {
	char name[20];
	int age;
	double gpa;
	char school[40];
};

struct Student makeStudent(const char n[20], int a, double g, const char s[40]) {

	struct Student p;
	// strcpy = "string copy", we use this because we our (char[]) has a fixed number of characters
	strcpy(p.name, n); 	
	p.age = a;
	p.gpa = g;
	strcpy(p.school, s);	
	return p;
}

void printStudent(struct Student x) {
	// x.name, x.age,..etc, x is our parameter in this function.
	printf("Student information -> Name: %s, Age: %d, GPA: %f, School: %s.\n", x.name, x.age, x.gpa, x.school);
}

int main() {
	struct Student user = makeStudent("Jeff", 15, 3.4, "LA High");
	printStudent(user);
	return 0;

} 

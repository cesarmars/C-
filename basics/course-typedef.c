#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
	int id;
	char* name;
}Info;


Info *make_course(int id, char*name) {

	Info* new_course = malloc(sizeof(Info));
	new_course->id = id;
	new_course->name = name;

	return new_course;
}

int main() {

	Info* cs61 = make_course(61, "Computer Architure");
	printf("This is cs%d, %s\n", cs61->id, cs61->name);
	return 0;

}

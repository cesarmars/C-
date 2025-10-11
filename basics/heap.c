#include <stdio.h>
#include <stdlib.h>

int main() {
	int size_one, size_two, blank_one, blank_two;
	size_one = 3;
	size_two = 4;
	int *fill_one, *fill_two;
	fill_one = &blank_one;
	fill_two = &blank_two;

	int *arr = malloc(size_one * sizeof(int)); // -> heap allocates space for  10 integers 
	

	*arr = 1;
	*(arr + 1) = 0;
	*(arr + 2) = 1;

	printf("The current size of the allocation is %d\n", size_one);

	for(int i = 0; i < 3; i++) {
		printf("arr[%d] = %d\n", i, *(arr + i));
	}
	
	if(*arr != 0 && *(arr + 1) != 0 && *(arr + 2) != 0) {
		printf("The heap allocation is full, resizing the allocation to length 4\n");

		int *temp= realloc(arr, size_two * sizeof(int));
		printf("Input a number for the last element allocation: ");
		scanf("%d", fill_one);
		printf("The number you inputed was %d\n", *fill_one);
		*(arr + 3) = blank_one;

		printf("The new size of the  allocations is %d\n", size_two);

		for(int j = 0; j < 4; j++) {
			printf("arr[%d] = %d\n", j, *(arr + j));
		}

	}
	else {
		for (int m = 0; m < 3; m++)	{
			if(*(arr + m) == 0)	{
				printf("Input a number for the 0th's space: ");
				scanf("%d", fill_two);
				*(arr + m) = *fill_two;
				printf("The new filled heap allocation of size 3\n");

				for(int k = 0; k < 3; k++) {
					printf("arr[%d] = %d\n", k, *(arr + k));
				}
			}
		}
	} 

	free(arr);


	return 0;

}

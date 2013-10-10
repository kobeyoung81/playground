#include <stdio.h>

void swap(int* a, int* b) {
	int c;
	c = *a;
	*a = *b; 
	*b = c;
	return;
}

void bubblesort(int * array, int length) {
	int i,j;
	for (i = 0; i < length; i++) {
		for (j = 0; j < length - i - 1; j++) {
			if (array[j] > array[j+1]) {
				swap(&array[j], &array[j+1]);
			}
		}
	}
}

int main() {
	int i;
	int list [10] = {1, 234, 232, 3 , 45, 6, 34, 29, 12, 45};
	bubblesort(list, 10);
	for (i = 0; i < 10; i++) {
		printf("%d,", list[i]);
	}
}

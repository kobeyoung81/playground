#include <stdio.h>


void swap(int * a, int* b) {
	int c = *a;
	*a = *b;
	*b = c;
	return;
}

void selection(int * array, int length) {
	int i, j, min, index;
	for (i = 0; i < length - 1; i++) {
		min = array[i];
		index = i;
		for (j = i; j < length; j++) {
			if (array[j] < min) {
				min = array[j];
				index = j;
			}
		}
		swap(&array[index], &array[i]);
	}
}

int main() {
	int i;
	int list[10] = {1, 2, 34, 5464, 23, 12, 56, 7, 2, 98};
	selection(list, 10);
	for (i = 0; i < 10; i++) {
		printf("%d,", list[i]);
	}
}







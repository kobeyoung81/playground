#include "mergesort.c"
#include "quicksort.c"
#include <stdio.h>

int findNLarge(int * array, int left, int n, int right) {
	int q ;//= partition(array, left, right, right);
	if (q == n) {
		return array[q];
	} else if ( q > n) {
		return findNLarge(array, left, n, q-1);
	} else {
		return findNLarge(array, q + 1, n, right);
	}
}

int main() {
	int i;
	int array[] = {2, 32, 123, 432, 1231, 1234, 34};
	//printf("The 3rd largest value is:%d", findNLarge(array, 0, 6, 6));
	mergesort(&array[0], 7);
	for (i = 0; i < 7; i++) {
		printf("%d\n", array[i]);
	}
}

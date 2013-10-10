#include <stdio.h>

int partition(int* array, int left, int pivotIndex, int right) {
	int pivotValue = array[pivotIndex];
	int storedIndex = left;
	int temp = array[right];
	int i;
	array[right] = pivotValue;
	array[pivotIndex] = temp;
	for (i = left; i < right; i++) {
		if (array[i] < pivotValue) {
			temp = array[i];
			array[i] = array[storedIndex];
			array[storedIndex] = temp;
			storedIndex++;
		}
	}
	temp = array[storedIndex];
	array[storedIndex] = pivotValue;
	array[right] = temp;
	return storedIndex;	
}

void quicksort(int* array, int left, int right) {
	int pivotIndex = left, pivotNewIndex;
	if (left < right) {
		pivotNewIndex = partition(array, left, pivotIndex, right);
		quicksort(array, left, pivotNewIndex - 1);
		quicksort(array, pivotNewIndex + 1, right);
	}
}

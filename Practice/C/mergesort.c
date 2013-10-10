#include <math.h>
#include <stdlib.h>

void merge(int*, int, int, int, int*);

int min(int x, int y) {
	return x>y?y:x;
}

int mergesort(int * array, int length) {
	int *brray = (int*) malloc(sizeof(int)*length);
	int width, i;
	for (width = 1; width < length; width *= 2) {
		for (i = 0; i < length; i += 2*width) {
			merge(array, i, min(i + width, length), min(i + 2*width, length), brray);
		}
	memcpy(array, brray, sizeof(int)*length);	
	}
}

void merge(int * array, int ileft, int iright, int iend, int * brray) {
	int i0 = ileft;
	int i1 = iright;
	int j;
	for (j = ileft; j < iend; j++) {
		if ( i0 < iright && (i1 >= iend || (array[i0] <= array[i1]))) {
			brray[j] = array[i0];
			i0++;
		} else {
			brray[j] = array[i1];
			i1++;
		}
	}
}

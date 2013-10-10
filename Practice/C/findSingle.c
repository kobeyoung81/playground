#include <stdio.h>

int main() {
	int list [11] = {1, 2, 3, 34, 34, 5, 23, 3, 2, 1, 5};
	int i, result = list[0];
	for ( i = 1; i < 11; i++) {
		result ^= list[i];
	}
	printf("Result : %d\n", result);
}

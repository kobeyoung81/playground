#include <stdio.h>

int list [4001];

int fab(int n) {
	if (list[n] != -1 ) {
		return list[n];
	} else {
		list[n] = fab(n - 1) + fab(n - 2);
		return list[n];
	}
}

int main() {
	int i;
	for (i = 0; i < 4001; i++) {
		list[i] = -1;
	}	
	list[1] = 1;
	list[2] = 1;
	printf("Result: %d\n", fab(1000));
}

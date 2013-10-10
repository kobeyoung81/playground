#include <stdio.h>

void hanoi(int n, char start, char middle, char end) {
	if (1 == n) {
		printf("Move disk %d from %c to %c\n", n, start, end);
	} else {
		hanoi(n-1, start, end, middle);
		printf("Move disk %d from %c to %c\n", n, start, end);
		hanoi(n-1, middle, start, end);
	}
}

int main() {
	int n;
	printf("Please input the number of disks:\n");
	scanf("%d", &n);
	hanoi(n, 'A', 'B', 'C');
	return 0;
}

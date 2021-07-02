#include <stdio.h>

int main() {

	int a = 2, b = 3, c = 4, d;

	d = a * b + c >= 8 && c / a - b != 0;
	// 2 * 3 + 4 >= 8 && 4 / 2 - 3 != 0;

	printf("%d\n", d);

}


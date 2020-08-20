#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int fac(int In) {
	int sum = 1;
	for (int i = In; i > 0; i--) {
		sum *= i;
	}
	return sum;
}

void fac_sum(long long int In) {
	long long int buffer = In;
	int digit = 0;
	long long int sum = 0;
	while (buffer != 0) {
		digit++;
		buffer /= 10;
	}
	for (int i = digit - 1; i >= 0; i--) {
		int y = pow(10, i);
		int z = In / y;
		int x = In / (y * 10);
		sum += fac(z - (x * 10));
	}
	if (In == sum) {
		printf("%d\n", In);
	}
}

int main() {
	int max, min;
	printf("Enter Minimum number : ");
	scanf("%d", &min);
	printf("Enter Maximum number : ");
	scanf("%d", &max);
	for (int i = min; i <= max; i++) {
		fac_sum(i);
	}
	return 0;
}
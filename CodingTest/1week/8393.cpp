#include <stdio.h>
#include <string.h>
int main() {
	int n;
	int sum = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	printf("%d", sum);
}

#include<stdio.h>
int main()
{
	int arr[100] = { 0, -3, 5, -4, -2, 3, 1, 0 };
	int n = 8;
	for (int i = 0; i < n; i++) {
		int sum1 = 0, sum2 = 0;
		for (int j = 0; j < i; j++) {
			sum1 += arr[j];
		}
		for (int j = i + 1; j < n; j++) {
			sum2 += arr[j];
		}
		if (sum1 == sum2)printf("%d ", i);
	}
}
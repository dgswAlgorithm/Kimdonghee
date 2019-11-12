#include<stdio.h>
#define MAX 100
#define SWAP(a,b) temp = a; a = b; b = temp;
int main()
{
	int arr[MAX] = { 0 };
	int temp;
	int n;
	for (int i = 0;; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] == 0) {
			n = i;
			break;
		}
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0 && n != 1) {
			if (i + 1 == n) {
				if (arr[i] < arr[i - 1])SWAP(arr[i], arr[i - 1]);
			}
			else if (i - 1 == -1) {
				if (arr[i] < arr[i + 1]) {
					SWAP(arr[i], arr[i + 1]);
					i++;
				}
			}
			else {
				if (arr[i] < arr[i + 1]) {
					if (arr[i + 1] > arr[i - 1]) {
						SWAP(arr[i + 1], arr[i]);
						i++;
					}
					else {
						SWAP(arr[i - 1], arr[i]);
					}
				}
				else if (arr[i] < arr[i - 1]) {
					if (arr[i + 1] > arr[i - 1]) {
						SWAP(arr[i + 1], arr[i]);
						i++;
					}
					else {
						SWAP(arr[i - 1], arr[i]);
					}
				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
}
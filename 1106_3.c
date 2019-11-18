#include<stdio.h>
int main()
{
	int n, arr[100] = { 0 }, max[3] = { 0 }, top = 0, one_idx = -1, save_idx;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		if (one_idx == -1 && arr[i] == 1)one_idx = i;
	}
	for (int i = one_idx; i <= n; i++) {
		if (arr[i] == 0) {
			if (top == 2) {
				if (max[0] + max[1] < max[1] + max[2]) save_idx = i - max[2] - 1;
				max[0] = max[1];
				max[1] = max[2];
			}
			else {
				save_idx = i - max[top] - 1;
				top++;
			}
		}
		else max[top]++;
	}
	printf("%d", save_idx);
}

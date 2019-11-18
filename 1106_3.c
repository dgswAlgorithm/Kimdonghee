#include<stdio.h>
int main()
{
	int n, arr[100] = { 0 }, max[100] = { 0 }, idx[100] = { 0 }, max_top = 1, idx_top = 0, one_idx = -1, max_num = 0, max_idx = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		if (one_idx == -1 && arr[i] == 1)one_idx = i; //맨 앞에 있는 0들을 무시하기 위해 첫 1의 인덱스를 one_idx에 저장
	}
	for (int i = one_idx; i <= n; i++) { //마찬가지로 맨 앞의 0을 무시하기 위해 one_idx부터 반복문 시작
		if (arr[i] == 0) {
			idx[idx_top++] = i - max[max_top++] - 1;  //연속되는 1의 값 앞의 0의 위치를 저장
			if (max[max_top - 2] + max[max_top - 1] > max_num) { //연속되는 1의 두개의 값의 합이 지금까지 나온 max보다 크면 max와 max_idx를 바꿈
				max_num = max[max_top - 2] + max[max_top - 1];
				max_idx = idx[idx_top - 1];
			}
		}
		else max[max_top]++; //연속되는 1의 갯수를 max에 넣는다
	}
	printf("%d", max_idx);
}

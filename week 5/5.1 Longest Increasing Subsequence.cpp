#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int lis(int a[], int n)
{
	int *lis, i, j, max = 0;
	lis = (int*)malloc(sizeof(int) * n);


	for (i = 0; i < n; i++)
		lis[i] = 1;


	for (i = 1; i < n; i++)
		for (j = 0; j < i; j++)
			if (a[i] > a[j] && lis[i] < lis[j] + 1)
				lis[i] = lis[j] + 1;


	for (i = 0; i < n; i++)
		if (max < lis[i])
			max = lis[i];


	free(lis);

	return max;
}


int main()
{
	int N; cin >> N; int a[N];
	for(int i = 0; i < N ;i++) cin >> a[i];
	int n = sizeof(a) / sizeof(a[0]);
	printf("%d\n", lis(a, n));
	return 0;
}



#include <iostream>
using namespace std;

int main()
{
	int N, k;
	cin >> N >> k;
	
	int* p = new int[N];

	for (int i = 0; i < N; ++i)
		cin >> p[i];

	qsort(p, N, sizeof(int), [](const void* a, const void* b) {
		return *(int*)b - *(int*)a;
		});

	cout << p[k - 1];

	delete[] p;
}
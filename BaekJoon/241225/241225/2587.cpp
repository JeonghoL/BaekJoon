#include <iostream>
using namespace std;

int main()
{
	int arr[5]{};
	int total{};

	for (int i = 0; i < 5; ++i)
	{
		cin >> arr[i];
		total += arr[i];
	}
	total /= 5;

	qsort(arr, 5, sizeof(int), [](const void* a, const void* b) {
		return *(int*)a - *(int*)b;
		});

	cout << total << endl << arr[2] << endl;
}
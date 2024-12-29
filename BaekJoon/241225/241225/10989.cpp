#include <iostream>
using namespace std;

int arr[10000];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;
	
	for (int i = 0; i < N; ++i)
	{
		int num;
		cin >> num;
		arr[num - 1]++;
	}

	for (int i = 0; i < 10000;)
	{
		if (arr[i] > 0)
		{
			cout << i + 1 << '\n';
			arr[i]--;
		}
		else
			++i;
	}
}
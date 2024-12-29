#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int A, B, C;
	cin >> A >> B >> C;
	int tot = A * B * C;
	int arr[10]{};
	int cnt{};
	while (true)
	{
		if (tot / (int)pow(10, cnt) > 0)
			cnt++;
		else
			break;
	}
	for (int i = cnt - 1; i >= 0; --i)
	{
		arr[tot / (int)pow(10, i)]++;
		tot -= (tot / (int)pow(10, i)) * (int)pow(10, i);
	}
	for (int i = 0; i < 10; ++i)
		cout << arr[i] << endl;
}
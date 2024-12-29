#include <iostream>
using namespace std;

int main()
{
	int n, total{};
	cin >> n;
	int* p = new int[n];
	for (int i = 0; i < n; ++i)
		cin >> p[i];

	for (int i = 0; i < n; ++i)
	{
		int cnt{};
		
		for (int j = 1; j <= p[i]; ++j)
		{
			if (p[i] % j == 0)
				cnt++;
		}
		if (cnt == 2)
			total++;
	}
	cout << total << endl;
}
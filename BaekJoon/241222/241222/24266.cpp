#include <iostream>
using namespace std;

int main()
{
	long long int n;
	cin >> n;

	long long int total{};
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			for (int k = 1; k <= n; ++k)
				total++;
		}
	}

	cout << total << endl << "3" << endl;
}
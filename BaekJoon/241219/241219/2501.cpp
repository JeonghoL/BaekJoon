#include <iostream>
using namespace std;

int main()
{
	int p, q, cnt{};
	cin >> p >> q;

	for (int i = 1; i <= p; ++i)
	{
		if (p % i == 0)
		{
			cnt++;

			if (cnt == q)
			{
				cout << i << endl;
				return 0;
			}
		}
	}
	if (cnt < q)
		cout << "0" << endl;
}
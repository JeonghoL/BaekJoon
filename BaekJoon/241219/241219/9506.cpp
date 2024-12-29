#include <iostream>
using namespace std;

int main()
{
	while (true)
	{
		int n, total{};
		cin >> n;

		if (n != -1)
		{
			for (int i = 1; i < n; ++i)
			{
				if (n % i == 0)
				{
					total += i;
				}
			}

			if (total == n)
			{
				cout << n << " = ";
				for (int i = 1; i < n; ++i)
				{
					if (n % i == 0)
					{
						if (i == 1)
						{
							cout << i;
						}
						else
							cout << " + " << i;
					}
				}
				cout << endl;
			}
			else
				cout << n << " is NOT perfect." << endl;
		}
		else
			return 0;
	}
}
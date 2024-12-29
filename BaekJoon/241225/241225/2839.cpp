#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	int max = (N % 3 == 0 ? N / 3 : N / 3 + 1);

	bool check{ false };
	int min = 1999;
	for (int i = 0; i < max; ++i)
	{
		int num = N;
		num -= 3 * i;
		if (num % 5 == 0)
		{
			check = true;
			if (min > (num / 5) + i)
				min = (num / 5) + i;
		}
		else if (num == 3)
		{
			check = true;
			if (min > i + 1)
				min = i + 1;
		}
	}

	if (!check)
		cout << "-1";
	else
		cout << min;
}
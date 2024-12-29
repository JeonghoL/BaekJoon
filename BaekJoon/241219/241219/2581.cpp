#include <iostream>
using namespace std;

int main()
{
	int M, N, add_total{}, min{};
	bool is_min{ false };

	cin >> M;
	cin >> N;

	for (int i = M; i <= N; ++i)
	{
		int cnt{};
		bool morethantwo{ false };
		for (int j = 1; j <= i; ++j)
		{
			if (i % j == 0)
				cnt++;
			
			if (cnt > 2)
			{
				morethantwo = true;
				break;
			}
		}

		if (cnt == 2 && !morethantwo)
		{
			if(!is_min)
			{
				is_min = true;
				min = i;
				add_total += i;
			}
			else
				add_total += i;
		}
	}
	if (add_total)
	{
		cout << add_total << endl << min << endl;
	}
	else
		cout << "-1" << endl;
}
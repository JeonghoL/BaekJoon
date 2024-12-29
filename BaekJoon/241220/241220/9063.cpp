#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	int* p = new int[N];
	int* q = new int[N];

	for (int i = 0; i < N; ++i)
		cin >> p[i] >> q[i];

	int min_x, max_x;
	int min_y, max_y;
	for (int i = 0; i < N; ++i)
	{
		if (i == 0)
		{
			min_x = p[i];
			max_x = p[i];

			min_y = q[i];
			max_y = q[i];
		}
		else
		{
			if (p[i] <= min_x)
				min_x = p[i];
			if (p[i] >= max_x)
				max_x = p[i];

			if (q[i] <= min_y)
				min_y = q[i];
			if (q[i] >= max_y)
				max_y = q[i];
		}
	}

	if (min_x == max_x)
		cout << "0" << endl;
	else
		cout << (max_x - min_x) * (max_y - min_y) << endl;

	delete[] q;
	delete[] p;
}
#include <iostream>
using namespace std;

int main()
{
	int N, M, Answer{};
	cin >> N >> M;

	int* p = new int[N];

	for (int i = 0; i < N; ++i)
		cin >> p[i];

	for (int i = 0; i < N - 2; ++i)
	{
		for (int j = i + 1; j < N - 1; ++j)
		{
			for (int k = j + 1; k < N; ++k)
			{
				if (p[i] + p[j] + p[k] <= M)
				{
					int tot = p[i] + p[j] + p[k];

					if (!Answer)
						Answer = tot;

					if (tot <= M && tot > Answer)
						Answer = tot;
				}
			}
		}
	}

	cout << Answer << endl;
	delete[] p;
}
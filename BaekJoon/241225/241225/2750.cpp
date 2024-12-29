#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	int* p = new int[N];

	for (int i = 0; i < N; ++i)
		cin >> p[i];
	
	for (int i = 0; i < N - 1; ++i)
	{
		for (int j = 0; j < N - 1; ++j)
		{
			if (p[j] > p[j + 1])
			{
				int temp(p[j + 1]);
				p[j + 1] = p[j];
				p[j] = temp;
			}
		}
	}

	for (int i = 0; i < N; ++i)
		cout << p[i] << endl;

	delete[] p;
}
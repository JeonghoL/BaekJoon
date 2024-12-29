#include <iostream>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	
	int large{};
	if (N > M)
		large = N;
	else
		large = M;

	int x{};
	for (int i = 1; i <= large; ++i)
	{
		if (N % i == 0 && M % i == 0)
			x = i;
	}
	int y{};
	for (int i = large; i <= N * M; ++i)
	{
		if (i % N == 0 && i % M == 0)
		{
			y = i;
			break;
		}
	}
	cout << x << '\n' << y << '\n';
}
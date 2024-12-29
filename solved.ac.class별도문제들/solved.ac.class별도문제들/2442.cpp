#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		for (int j = N - 2 - i; j >= 0; --j)
		{
			cout << " ";
		}
		for (int k = 0; k <= (i * 2); ++k)
		{
			cout << "*";
		}
		cout << endl;
	}

}
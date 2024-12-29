#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		for (int k = 0; k < i; ++k)
			cout << " ";

		for (int j = N - 1 - i; j >= 0; --j)
		{
			cout << "*";
		}
		cout << endl;
	}

}
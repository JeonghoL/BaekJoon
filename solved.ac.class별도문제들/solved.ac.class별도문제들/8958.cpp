#include <iostream>
using namespace std;

int main()
{
	int N, cnt{1}, tot{};
	cin >> N;
	string* str = new string[N];

	for (int i = 0; i < N; ++i)
		cin >> str[i];

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < str[i].length(); ++j)
		{
			if (str[i][j] == 'O')
			{
				tot += cnt;
				++cnt;
			}
			else
				cnt = 1;
		}
		cout << tot << '\n';
		tot = { 0 };
		cnt = { 1 };
	}

	delete[] str;
}
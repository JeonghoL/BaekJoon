#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N, M, cnt{};
	cin >> N >> M;

	vector<string> str(N);
	vector<string> str2(M);
	for (int i = 0; i < N; ++i)
		cin >> str[i];
	for (int i = 0; i < M; ++i)
		cin >> str2[i];

	sort(str.begin(), str.end());

	for (int i = 0; i < M; ++i)
	{
		if (binary_search(str.begin(), str.end(), str2[i]))
			cnt++;
	}

	cout << cnt;
}
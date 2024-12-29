#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	vector<int> p(N);
	for (int i = 0; i < N; ++i)
		cin >> p[i];

	sort(p.begin(), p.end());

	int M;
	cin >> M;

	vector<int> q(M);
	for (int i = 0; i < M; ++i)
	{
		cin >> q[i];
	}

	for (int i = 0; i < M; ++i)
	{
		if (binary_search(p.begin(), p.end(), q[i]))
		{
			cout << "1 ";
		}
		else
			cout << "0 ";
	}
}
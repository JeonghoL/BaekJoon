#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int>vec;

int main()
{
	int N;
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		int m;
		cin >> m;
		vec.push_back(m);
	}

	sort(vec.begin(), vec.end());

	for (int i = 0; i < N; ++i)
		cout << vec[i] << '\n';
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Point {
	long long int x;
	int cnt{};
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;
	
	vector<Point> p(N);
	vector<long long int> unique_values;

	for (int i = 0; i < N; ++i)
	{
		cin >> p[i].x;
		unique_values.push_back(p[i].x);
	}

	sort(unique_values.begin(), unique_values.end());
	unique_values.erase(unique(unique_values.begin(), unique_values.end()), unique_values.end());

	for (int i = 0; i < N; ++i) {
		p[i].cnt = lower_bound(unique_values.begin(), unique_values.end(), p[i].x) - unique_values.begin();
	}

	for (int i = 0; i < N; ++i) {
		cout << p[i].cnt << " ";
	}
}
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// 이거 좀 어려웠음
int main()
{
	int A, B, V, cnt{};

	cin >> A >> B >> V;

	cout << fixed << setprecision(0);
	cout << ceil(((double)(V - B) / (A - B)));
}
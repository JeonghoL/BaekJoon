#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// �̰� �� �������
int main()
{
	int A, B, V, cnt{};

	cin >> A >> B >> V;

	cout << fixed << setprecision(0);
	cout << ceil(((double)(V - B) / (A - B)));
}
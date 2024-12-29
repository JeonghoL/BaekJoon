#include <iostream>
using namespace std;

int main()
{
	int a[5];
	for (int i = 0; i < 5; ++i)
		cin >> a[i];
	int tot{};
	for (int i = 0; i < 5; ++i)
		tot += a[i] * a[i];
	tot %= 10;
	cout << tot;
}
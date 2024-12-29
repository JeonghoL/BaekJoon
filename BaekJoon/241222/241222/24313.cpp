#include <iostream>
using namespace std;

int main()
{
	int a1, a0, c, n0;
	cin >> a1 >> a0;
	cin >> c;
	cin >> n0;

	if (c - a1 > 0) {
		if (n0 >= a0 / (c - a1))
			cout << "1" << endl;
		else
			cout << "0" << endl;
	}
	else if (a0 <= 0 && c - a1 == 0)
	{
		cout << "1" << endl;
	}
	else
	{
		cout << "0" << endl;
	}
}
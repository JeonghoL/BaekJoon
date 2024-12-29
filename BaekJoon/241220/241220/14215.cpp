#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	if (a > c)
	{
		int temp{ c };
		c = a;
		a = temp;
	}

	if (b > c)
	{
		int temp{ c };
		c = b;
		b = temp;
	}

	if (a + b <= c)
		cout << a + b + (a + b - 1) << endl;
	else
		cout << a + b + c << endl;
}
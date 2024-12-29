#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;

	int D = a * e - b * d;
	int x = (c * e - b * f) / D;
	int y = (a * f - c * d) / D;

	cout << x << " " << y << endl;
	return 0;
}
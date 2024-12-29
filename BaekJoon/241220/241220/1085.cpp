#include <iostream>
using namespace std;

int main()
{
	int x, y, w, h;

	cin >> x >> y >> w >> h;

	int a = w - x;
	int b = h - y;
	int min_x;
	if (a < x)
		min_x = a;
	else
		min_x = x;

	int min_y;
	if (b < y)
		min_y = b;
	else
		min_y = y;

	if (min_x < min_y)
		cout << min_x << endl;
	else
		cout << min_y << endl;
}
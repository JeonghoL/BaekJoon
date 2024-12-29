#include <iostream>
using namespace std;

struct Point {
	int x;
	int y;
};

int compare(const void*, const void*);

int main()
{
	int N;
	cin >> N;

	Point* p = new Point[N];

	for (int i = 0; i < N; ++i)
		cin >> p[i].x >> p[i].y;

	qsort(p, N, sizeof(Point), compare);

	for (int i = 0; i < N; ++i)
		cout << p[i].x << " " << p[i].y << '\n';

	delete[] p;
}

int compare(const void* a, const void* b)
{
	Point p1 = *(Point*)a;
	Point p2 = *(Point*)b;

	if (p1.y == p2.y)
		return p1.x - p2.x;
	else
		return p1.y - p2.y;
}
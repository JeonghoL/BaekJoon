#include <iostream>
using namespace std;

int main()
{
	int A, B, C;
	while (true)
	{
		cin >> A >> B >> C;
		if (!A && !B && !C)
			return 0;

		if (A > C)
		{
			int temp(A);
			A = C;
			C = temp;
		}

		if (B > C)
		{
			int temp(B);
			B = C;
			C = temp;
		}

		if ((C * C) == (A * A) + (B * B))
			cout << "right" << '\n';
		else
			cout << "wrong" << '\n';
	}
}
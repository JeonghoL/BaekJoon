#include <iostream>
using namespace std;

int main()
{
	int A[3], longest;
	while (true)
	{
		cin >> A[0] >> A[1] >> A[2];

		if (!A[0] && !A[1] && !A[2])
			return 0;
		else
		{
			for (int i = 0; i < 3; ++i)
			{
				if (i == 0)
					longest = A[0];
				else
				{
					if (A[i] >= longest)
						longest = A[i];
				}
			}

			bool check{ false };
			int total{};
			for (int i = 0; i < 3; ++i)
			{
				total += A[i];
			}
			total -= longest;
			if (total > longest)
				check = true;

			if (check)
			{
				if (A[0] == A[1] && A[0] == A[2])
					cout << "Equilateral" << endl;
				else if ((A[0] == A[1] && A[0] != A[2]) || (A[1] == A[2] && A[0] != A[1]) || (A[0] == A[2] && A[0] != A[1]))
					cout << "Isosceles" << endl;
				else
					cout << "Scalene" << endl;
			}
			else
				cout << "Invalid" << endl;
		}
	}
}
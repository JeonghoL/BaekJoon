#include <iostream>
using namespace std;

int main()
{
	int A, B, C;
	cin >> A;
	cin >> B;
	cin >> C;

	if (A == 60 && B == 60 && C == 60)
		cout << "Equilateral" << endl;
	else if ((A + B + C) == 180)
	{
		if ((A == B) || (B == C) || (C == A))
			cout << "Isosceles" << endl;
		else
			cout << "Scalene" << endl;
	}
	else
		cout << "Error" << endl;
}
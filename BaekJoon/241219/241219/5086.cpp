#include <iostream>
using namespace std;

int main()
{
	while (true)
	{
		int a, b;
		cin >> a >> b;
		if (!a && !b)
			return 0;
		else {
			if (b % a == 0)
				cout << "factor" << endl;
			else if (a % b == 0)
				cout << "multiple" << endl;
			else
				cout << "neither" << endl;
		}
	}
}